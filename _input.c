#include "shell.h"

/**
 * read_cmd - Reads a command from standard input.
 * @command: Buffer to store the read command.
 * @size: Size of the buffer.
 */
void read_cmd(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
	if (feof(stdin))
{
	_nlprint("\n");
	exit(EXIT_SUCCESS);
}
	else
	{
		_nlprint("Error while reading input.\n");
		exit(EXIT_FAILURE);
	}
}
	command[strcspn(command, "\n")] = '\0';
}
