markdown
Copy code
# Bacon Programming Language

## Overview

**Bacon** is a simple, lightweight programming language designed for educational purposes and experimentation. It features a straightforward syntax, making it accessible for beginners while providing enough flexibility for more advanced users to explore programming concepts. The language includes basic arithmetic operations, conditional statements, loops, and functions.

This repository contains the source code for the Bacon programming language, along with example programs and unit tests. The goal is to provide a comprehensive framework for understanding how interpreters work, tokenization, parsing, and evaluating expressions.

## Table of Contents

- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [File Structure](#file-structure)
- [Contributing](#contributing)
- [License](#license)

## Features

- **Simple Syntax**: Bacon's syntax is designed to be easy to learn, allowing new programmers to focus on core concepts without getting bogged down by complex rules.
- **Arithmetic Operations**: Supports basic arithmetic operations such as addition, subtraction, multiplication, and division.
- **Control Structures**: Includes conditional statements (`if`, `else`) and loops (`while`).
- **Functions**: Allows the definition and invocation of functions, promoting code reuse and modularity.
- **Error Handling**: Implements basic error handling to provide meaningful error messages during execution.

## Getting Started

To get started with Bacon, you will need to have a C compiler installed on your system. This project has been tested with GCC on Windows. Follow these steps to set up your environment:

1. **Install MinGW (for Windows)**:
   - Download and install [MinGW](http://www.mingw.org/).
   - Ensure the installation path is added to your system's PATH variable.

2. **Clone the Repository**:
   ```bash
   git clone https://github.com/yourusername/bacon.git
   cd bacon
Build the Project:
If using Makefile:
bash
Copy code
mingw32-make
Or compile manually:
bash
Copy code
gcc -Iinclude src/*.c -o bacon
Usage
Once the project is compiled, you can run the Bacon interpreter using the command line. Here’s how to execute a Bacon program:

Create a Bacon source file (e.g., example.bacon) with the following content:

bacon
Copy code
let x = 10;
let y = 20;
let result = x + y;
print(result);
Execute the file using the interpreter:

bash
Copy code
./bacon examples/example1.bacon
File Structure
The repository is organized as follows:

makefile
Copy code
bacon/
│
├── src/                  # Source code
│   ├── bacon.c           # Main implementation file
│   ├── lexer.c           # Lexer functions
│   ├── parser.c          # Parser functions
│   ├── evaluator.c       # Evaluator functions
│   ├── utils.c           # Utility functions
│   └── ...               # Other source files if needed
│
├── include/              # Header files
│   ├── bacon.h           # Main header for declarations
│   └── ...               # Other headers if needed
│
├── examples/             # Example programs using the language
│   ├── example1.bacon    # Example 1
│   └── example2.bacon    # Example 2
│
├── tests/                # Unit tests
│   ├── test_lexer.c      # Tests for lexer
│   ├── test_parser.c     # Tests for parser
│   ├── test_evaluator.c  # Tests for evaluator
│   └── ...               # Other tests
│
├── README.md             # Project documentation
├── Makefile              # Makefile for building the project
└── .gitignore            # Files to ignore by git
Contributing
Contributions to the Bacon programming language are welcome! If you'd like to contribute, please follow these steps:

Fork the repository.
Create a new branch (git checkout -b feature/YourFeature).
Make your changes and commit them (git commit -m 'Add some feature').
Push to the branch (git push origin feature/YourFeature).
Open a Pull Request.
Coding Standards
Please ensure your code adheres to the project's coding standards and includes relevant tests.

License
This project is licensed under the MIT License. See the LICENSE file for details.

