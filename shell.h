#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

/**
 * prompt_display - Displays a prompt message.
 */
void prompt_display(void);

/**
 * _nlprint - Prints a newline-terminated string to the standard output.
* @display: The string to be printed.
 */
void _nlprint(const char *display);

/**
 * exe_cmd - Executes a command using system call.
 * @command: The command to be executed.
 */
void exe_cmd(const char *command);

#endif
