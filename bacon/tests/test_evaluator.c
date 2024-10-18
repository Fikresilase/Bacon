#include <stdio.h>
#include "../src/evaluator.c"

int main() {
    printf("Running evaluator tests...\n");
    evaluate("let a = 5;");
    // Add more tests as needed
    return 0;
}
