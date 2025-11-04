class Resource {
public:
    Resource() { /* allocate resource */ }
    ~Resource() { /* release resource */ }
};
const std = @import("std");

pub fn main() void {
    const resource = create_resource(); // Assume this allocates a resource
    // Work with resource...
    // Zig will handle cleanup when `resource` goes out of scope.
}

fn create_resource() *Resource {
    return std.heap.page_allocator.create(Resource).catch(|err| {
        std.debug.print("Failed to allocate resource\n", .{});
        return null;
    });
}
