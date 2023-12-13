#ifndef SHELL_H
#define SHELL_H
/*
 *The library used within the project
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

/*
 *The Macro file extension used
 */
void display_prompt(void);
void stan_print(const char *message);
void read_command(char *command, size_t size);
void execute_command(const char *command);




#endif /* SHELL_H ending space */
