#include "shell.h"

/*
 *This is print function that is serving as my print function
 */

void stan_print(const char *message) {
    write(STDOUT_FILENO, message, strlen(message));
}
