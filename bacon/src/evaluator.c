#include <stdio.h>
#include "bacon.h"

// Evaluation logic
void evaluate(const char* parsed_code) {
    char* tokens[MAX_TOKENS];
    int token_count = 0;

    // Tokenization
    char* parsed_copy = strdup(parsed_code);
    char* token = strtok(parsed_copy, " \n;");
    while (token != NULL && token_count < MAX_TOKENS) {
        tokens[token_count++] = token;
        token = strtok(NULL, " \n;");
    }

    // Evaluate the tokens
    for (int i = 0; i < token_count; i++) {
        if (strcmp(tokens[i], "print") == 0) {
            if (i + 1 < token_count) {
                printf("Evaluated print statement: %s\n", tokens[i + 1]);
                i++; // Skip next token
            } else {
                print_error("Missing argument for print.");
            }
        } else if (strcmp(tokens[i], "let") == 0) {
            if (i + 2 < token_count && strcmp(tokens[i + 1], "=") == 0) {
                printf("Evaluated variable: %s\n", tokens[i + 2]);
                i += 2; // Skip next two tokens
            } else {
                print_error("Invalid variable declaration.");
            }
        }
    }

    free(parsed_copy);
}
