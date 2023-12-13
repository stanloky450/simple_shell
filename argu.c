#include "shell.h"

#define MAX_COMMAND_LENGTH 100
#define MAX_ARGUMENTS 10


int main() {
    char input[MAX_COMMAND_LENGTH];
    char *command;
    char *arguments[MAX_ARGUMENTS];
    int i = 0;

    while (1) {
        display_prompt(); // Display prompt and wait for user input

        if (fgets(input, sizeof(input), stdin) == NULL) { // Read user input
            stan_print("\n"); // Print newline for Ctrl+D
            break;
        }

        input[strcspn(input, "\n")] = '\0'; // Remove newline character

        if (strlen(input) == 0) { // Empty command, display prompt again
            continue;
        }

        // Tokenize the input to separate command and arguments
        command = strtok(input, " ");
        arguments[0] = command; // First argument is the command itself

        i = 1;
        while ((arguments[i] = strtok(NULL, " ")) != NULL) {
            i++;
            if (i >= MAX_ARGUMENTS - 1) {
                break;
            }
        }
        arguments[i] = NULL; // Set the last argument as NULL

        execute_command(command, arguments); // Execute the command with arguments
    }

    stan_print("Exiting the shell...\n");
    return 0;
}
