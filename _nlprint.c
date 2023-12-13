#include "shell.h"

/**
 * _nlprint - Prints a newline-terminated string to the standard output.
 * @display: The string to be printed.
 */
void _nlprint(const char *display)
{
	write(STDOUT_FILENO, display, strlen(display));
}
