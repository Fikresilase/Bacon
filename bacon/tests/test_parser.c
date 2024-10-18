#include <stdio.h>
#include "../src/parser.c"

int main() {
    printf("Running parser tests...\n");
    parse("let a = 5;");
    // Add more tests as needed
    return 0;
}
