#include <stdio.h>
#include "../src/lexer.c"

int main() {
    printf("Running lexer tests...\n");
    tokenize("let a = 5;");
    // Add more tests as needed
    return 0;
}
