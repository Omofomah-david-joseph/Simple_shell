#include "shell.h"

/*******Displaying the prompt******/

/**
 * show_prompt - Displayscthe prompt sign
 *
 * Return: Always 0
 */
void show_prompt(void)
{
	shell_print("$$");
}


/********Displaying print function***********/
/**
 * shell_print - Displays the print
 * @input: sting value inputed
 *
 * Return: Always 0
 */
void shell_print(const char *input)
{
	write(STDOUT_FILENO, input, strlen(input));
}


/******READING USER'S INPUT******/

/**
 * read_input - function reads user inputs
 * @input: command given to prompt
 * @size: length of command
 *
 * Return: Aways 0
 */
void read_input(char *input, size_t size)
{
	if (fgets(input, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			shell_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			shell_print("Error reading input \n");
			exit(EXIT_FAILURE);
		}
	}
	input[strcspn(input, "\n")] = '\0';
}

/**********EXECUTING THE CODE***************/

/**
 * execute_input - a fuction that executes a code at the prompt
 * @input: comand inputed
 * Return: Always 0
 */
void execute_input(const char *input)
{
	pid_t baby_pid  = fork();
	if (baby_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (baby_pid == 0)
	{
		if (execve(const char *input, char *input, NULL) == -1)
		{
			perror("Error");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
}
