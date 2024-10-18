#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bacon.h"

// Tokenization logic
void tokenize(const char* source) {
    char* tokens[MAX_TOKENS];
    int token_count = 0;

    char* source_copy = strdup(source); // Duplicate source to avoid modifying original
    char* token = strtok(source_copy, " \n;");
    while (token != NULL && token_count < MAX_TOKENS) {
        tokens[token_count++] = token;
        token = strtok(NULL, " \n;");
    }

    // Print tokens for verification
    printf("Tokens:\n");
    for (int i = 0; i < token_count; i++) {
        printf("  %s\n", tokens[i]);
    }

    free(source_copy);
}
