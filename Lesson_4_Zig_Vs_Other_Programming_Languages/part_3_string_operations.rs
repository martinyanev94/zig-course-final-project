fn borrow_example(s: &String) {
    println!("{}", s);
}
const std = @import("std");

fn print_string(s: *const u8) void {
    std.debug.print("{s}\n", .{s});
}

pub fn main() void {
    const my_string = "Hello, Zig!";
    print_string(my_string);
}
