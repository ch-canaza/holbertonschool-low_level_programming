#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "header.h"
int main(int ac, char **ar, char **envp)
{
        char **env = __environ;
        //char **ar;
        char *buffer = NULL;
        char *av[10];
        char *tok = NULL;
        //char *tok2[100];
        //
        int bufsize = 100;
        int pos = 0;
        // char **tokens = malloc(bufsize * sizeof(char));
        //char **split = malloc(bufsize * sizeof(char));
        size_t size = 0;
        pid_t pid;
        int rex = 0;
        int status;
        int g;
        int i = 0, j;
        struct stat st;
    do{
        pos = 0;
        if(isatty(STDIN_FILENO))
            printf("#cisfun$ ");
        g = getline(&buffer, &size, stdin);
        if (g == EOF){
            if (isatty(STDIN_FILENO))
                write(STDOUT_FILENO, "\n", 1);
            free(buffer);
            exit(0);
        }
        if (strcmp(buffer, "exit\n") == 0)
                exit(0);
        // tokens inicia aqui
        tok = strtok(buffer, "\t\n\a\r ");
        ///
        while (tok != NULL)
        {
            av[pos] = tok;
            pos++;
            tok = strtok(NULL, " \t\n\r");
        }
        av[pos] = NULL;
        ///     termina aqui*/
        // if (stat(ar[0], &st) == 0)
        // tokens[pos] = tok;
        //if ((*buffer != '\n') && (*buffer != ' '))
        if ((*buffer != '\n') && av[0])    
        {    pid = fork();
            if (pid == 0)
            {       
                if (execve(av[0], av, envp) == -1) 
                        perror("./shell");
            }
            else
                wait(&status);
        }
        pos = 0;
        while (pos < 10)
        {
            av[pos] = 0;
            pos++;
        }
    } while (1);
        av[pos] = NULL;
        free(buffer);
        free(av);
        //free(split);
         return (EXIT_SUCCESS);
}