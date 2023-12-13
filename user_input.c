#include "shell.h"

/*
 *This is print function that is serving as my print function
 */

void read_command(char *command, size_t size) {
    if (fgets(command, size, stdin) == NULL) {
        if (feof(stdin)) {
            stan_print("\n");
            exit(EXIT_SUCCESS);
        } else {
            stan_print("Error while reading input.\n");
            exit(EXIT_FAILURE);
        }
    }
    command[strcspn(command, "\n")] = '\0'; // Remove newline
}
