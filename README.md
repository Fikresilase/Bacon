# Bacon

## Description
inspired from elequent javascript egg programing languge bacon is A simple interpreted programing lanuage with simpleand accessible syntax that supports variables,arithmetic operations, loops, conditionals, andfunctions. built using tokenization (lexing),parsing, and evaluation.  

## Screenshot
![Main Page Screenshot](/bacon.png)




- **Technology Stack**: C.


## Getting Started

Follow these steps to get the Bacon programming language up and running on your local machine.

### Prerequisites

To use and build Bacon, ensure the following tools are installed:

- **C Compiler** (like GCC or Clang)
- **Git** (for cloning the repository)
- **Make** (for build automation; if on Windows, MinGW can be used to add make support)



### Installing MinGW (for Windows)

If you're on Windows and don't have make or gcc, follow these steps:

1. Download MinGW and follow the installation instructions.
2. Add MinGW’s `bin` directory to your system’s PATH environment variable.
3. Verify the installation by running:
         
   
   gcc --version
   make --version
### Cloning the Repository

Clone the repository to get the latest source code:

      
          git clone https://github.com/yourusername/bacon.git
          cd bacon

### Building the Project

To compile the source code and create the Bacon interpreter:

#### Using Makefile (recommended):

      
        make
#### Manual Compilation (if make isn’t available):

      
       gcc -Iinclude src/*.c -o bacon

This will create an executable file named bacon.

### Running a Bacon Program

Once the project is compiled, you can run Bacon programs from the examples folder. Create a Bacon source file, e.g., examples/example1.bacon, with the following content:

    
     let x = 10;
     let y = 20;
     let result = x + y;
     print(result);

Execute the program with:

  
       ./bacon examples/example1.bacon

This should print the result of the sample program in your terminal.

License
-------

This project is licensed under the MIT License.
