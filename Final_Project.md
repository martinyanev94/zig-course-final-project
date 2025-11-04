# Final Project: Zig Programming Application

## Project Overview

In this final project, students will apply their knowledge of the Zig programming language to develop a simple application. The project will integrate various concepts learned throughout the course, including data types, control structures, functions, modules, and potentially web server capabilities. 

## Project Objective

The objective of this project is to create a simple command-line based application or a web server using Zig that demonstrates the use of:

- Basic syntax and structure
- Control flow (if statements, loops)
- Functions and error handling
- Modules and package management
- Basic web functionality (if applicable)

## Project Requirements

### Creating the Application

1. **Choose a Project Type:** 
   You can create either a console-based application or a simple web server.
   - **Console-Based Application:** Design a utility tool (e.g., a calculator, to-do list manager).
   - **Web Server:** Create a simple HTTP server that responds with a message.

2. **Project Structure:**
   Organize your project in a directory named `myproject` with the following structure:

   ```
   myproject/
   ├── zig.mod
   └── src/
       └── main.zig
   ```

   The `zig.mod` file should include the module name and any dependencies.

3. **Implement Functionality:**
   Depending on the chosen project type, implement the following features:

   #### For Console-Based Application:
   - User input handling
   - Implement at least three operations (for instance, add, subtract, or list tasks)
   - Use functions to encapsulate logic.

   #### For Web Server:
   - Listen on a port (e.g., 127.0.0.1:8080)
   - Send a simple HTTP response (e.g., “Hello, world!”)

### Code Structure

Make sure to use meaningful naming conventions and document your code. Comments are encouraged to explain logic and function usage. Here is an outline for your `main.zig` file:

```zig
const std = @import("std");

pub fn main() void {
    // Your application logic here

    // Example: If creating a web server
    const http = @import("ziglings/http");
    var server = http.Server.listen("127.0.0.1:8080");
    defer server.close();

    while (true) {
        var client = server.accept();
        defer client.close();
        client.write("Hello, world!\n");
    }
}
```

### Testing your Application

- Implement basic tests to verify that your application works as intended.
- Use Zig's testing framework for unit testing your functions.

## Additional Considerations

- **Error Handling:** Properly handle errors by using Zig’s error handling mechanisms (Error unions and checks).
- **Modules:** If your application grows complex, consider breaking it down into multiple modules.

## Submission Guidelines

- Submit the project directory as a .zip file.
- Include a README.md file to explain how to run and test your application.
- Ensure your code is clean, well-documented, and adheres to the Zig conventions discussed in class.

## Evaluation Criteria

Your project will be evaluated based on:

- **Functionality:** Does the application run as expected? 
- **Code Quality:** Is the code clean, well-organized, and well-documented?
- **Complexity:** How well do you implement concepts learned in the course? 
- **User Experience:** Is the application user-friendly and easy to use?

Good luck, and enjoy the coding process!