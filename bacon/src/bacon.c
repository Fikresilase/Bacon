#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bacon.h"

#define MAX_SOURCE_SIZE 1024
#define MAX_TOKENS 128

// Function to load source code from a file
char* load_source(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (!file) {
        print_error("Failed to open source file.");
        return NULL;
    }

    char* source = malloc(MAX_SOURCE_SIZE);
    fread(source, sizeof(char), MAX_SOURCE_SIZE, file);
    fclose(file);
    return source;
}

// Function to run the Bacon interpreter
void run_bacon(const char* source) {
    char* tokens[MAX_TOKENS];
    int token_count = 0;

    // Tokenization
    char* token = strtok(source, " \n;");
    while (token != NULL && token_count < MAX_TOKENS) {
        tokens[token_count++] = token;
        token = strtok(NULL, " \n;");
    }

    // Parsing
    for (int i = 0; i < token_count; i++) {
        if (strcmp(tokens[i], "print") == 0) {
            if (i + 1 < token_count) {
                printf("%s\n", tokens[i + 1]);
                i++; // Skip the next token as it was printed
            } else {
                print_error("Missing argument for print.");
            }
        }
        else if (strcmp(tokens[i], "let") == 0) {
            if (i + 2 < token_count && strcmp(tokens[i + 1], "=") == 0) {
                printf("Variable declaration: %s\n", tokens[i + 2]);
                i += 2; // Skip the next two tokens
            } else {
                print_error("Invalid variable declaration.");
            }
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: bacon <source_file.bacon>\n");
        return 1;
    }

    char* source = load_source(argv[1]);
    if (source) {
        run_bacon(source);
        free(source);
    }
    return 0;
}
