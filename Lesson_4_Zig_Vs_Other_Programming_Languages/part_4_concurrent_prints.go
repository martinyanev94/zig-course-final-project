go func() {
    fmt.Println("Hello from a goroutine!")
}()
const std = @import("std");

fn worker() void {
    std.debug.print("Hello from a worker thread!\n", .{});
}

pub fn main() void {
    const thread = std.Thread.spawn(worker) catch |err| {
        std.debug.print("Failed to spawn thread: {}\n", .{err});
        return;
    };
    thread.join();
}
