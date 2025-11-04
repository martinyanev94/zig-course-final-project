int *ptr = malloc(sizeof(int));
*ptr = 42;
free(ptr);
const std = @import("std");

pub fn main() void {
    var allocator = std.heap.page_allocator;
    const ptr = try allocator.create(i32);
    *ptr = 42;
    // Memory is automatically freed when it goes out of scope.
    std.debug.print("Stored value: {}\n", .{*ptr});
}
