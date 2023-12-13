#include "shell.h"

/**
 *exe_cmd - Executes a command using fork and execve.
 * @command: The command to be executed
 *
 *
 */
void exe_cmd(const char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
	perror("fork");
	exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
		{
		execve(command, command, (char *) NULL);
		perror("execve");
		exit(EXIT_FAILURE);
		}
			else
			{
			wait(NULL);
			}
}
