#include "shell.h"
/*
 *This is shell script function
 */

int main(void) {
    char command[120];

    while (true) {
        display_prompt();
        read_command(command, sizeof(command));
        execute_command(command);
    }

    return 0;
}
