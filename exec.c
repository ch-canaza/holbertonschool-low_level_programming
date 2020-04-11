#include "header.h"
void _exec(char *av[])
{
    size_t pid;
    int status;

    pid = fork();
        if (pid == 0){
                if (execve(av[0], av, NULL) == -1){
                    perror("./shell");
                    exit(127);
                }
            }
            else
            {
                wait(&status);
            }       
}
