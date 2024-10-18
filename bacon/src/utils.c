#include <stdio.h>
#include "bacon.h"

// Print error messages
void print_error(const char* error_message) {
    fprintf(stderr, "Error: %s\n", error_message);
}
