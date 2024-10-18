#ifndef BACON_H
#define BACON_H

// Function declarations
void tokenize(const char* source);
void parse(const char* tokens);
void evaluate(const char* parsed_code);
void print_error(const char* error_message);
char* load_source(const char* filename);

#endif // BACON_H
