#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/wait.h>

void show_prompt(void);
void shell_print(const char *input);
void read_input (char *instr, size_t size);
void execute_input(const char *input);
void input(const char *input);

#endif /* _SHELL_H*/
