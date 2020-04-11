#ifndef HEADER_H
#define HEADER_H
#include <stddef.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void split(char *buffer, char **av);
void get_line(char *buffer);
//void get_line(char *buffer, size_t size, char *stdin);
int main(int ac, char **ar, char **envp);
#endif