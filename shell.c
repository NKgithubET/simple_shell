#include "shell.h"

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char command[126];

	while (1)
	{
		prompt_display();
		user_input(command, sizeof(command);
		exe_cmd(command);

	}
	return (0);
}
