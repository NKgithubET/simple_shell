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
			int i = 1;
			char *tokenized_args[MAX_ARGS];
			tokenized_args[0] = strtok((char *)command, " \t\n");

			while (i < MAX_ARGS && (tokenized_args[i] = strtok(NULL, " \t\n")) != NULL)
			{
				i++;
			}
			tokenized_args[i] = NULL;
		execve(tokenized_args[0], tokenized_args, NULL);

		perror("execve");
		exit(EXIT_FAILURE);
		}
			else
			{
			wait(NULL);
			}
}
