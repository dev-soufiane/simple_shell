#ifndef SHELL_H
#define SHELL_H

/* Macros */
extern char **environ;

/* Standard libraries */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>

/* string functions */
size_t _strlen(const char *s);
int _strcmp(const char *s1, const char *s2);
char *_strdup(const char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
void _strBackwards(char *s, int size);

/* Functions prototypes */
char **_string_splitter(char *s);
char *_getUserInput(void);
void _showPrompt(void);
void _freeMemory(char **myArray);
int _run_command(char **cmd, char **argv, int indx);
char *_getenv(char *Var);
char *_handlePath(char *cmdLine);
char *_my_itoa(int n);
int _builtinCheck(char *cmdName);
void _printEnv(char **cmd, int *st);
void _execBuiltin(char **cmdArg, char **argv, int *st, int indx);
void _exit_(char **arg, int *st);
void _displayErrorMessages(char *shell_name, char *command, int indx);

#endif /* End of shell.h header file */
