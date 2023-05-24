#ifndef SHELL_H
#define SHELL_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>

#define MAX_ARGS 1024
extern char **environ;

int _putchar(char c);
int simple_shell(char *line, ssize_t linelen, char **argv);
void _putString(char *str);
void _printEnv(void);
void handle_error(char **argv);
int _strcmp(char *s1, char *s2);
int fork_process(char **args, char **argv);
void file_error(char **argv);
char *_getenv(char *name);
char *search_file(char *s);
/*void print_decimal(int myNum);*/
int _isExecutable(char *s);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
char *_strdup(char *str);
char *_strcpy(char *destination, const char *source);
int _strncmp(char *str1, char *str2, size_t n);
#endif
