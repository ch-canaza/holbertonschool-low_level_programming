#include "header.h"
int main(int ac, char **ar, char **envp)
{
    char **env = __environ,*buffer = NULL;
    char command[10],*av[10]; 
    int bufsize = 100, pos = 0, status,g;;
    size_t size = 0, pid;
    
    do
    {
        pos = 0;
        if (isatty(STDIN_FILENO))
            printf("#cisfun$ ");
        ///
        //get_line(buffer);
        g = getline(&buffer, &size, stdin);
        if (g == EOF){
            if (isatty(STDIN_FILENO))
                write(STDOUT_FILENO, "\n", 1);
            free(buffer);
            exit(0);
        }
        if (strcmp(buffer, "exit\n") == 0)
            exit(0);
        split(buffer, av);  
        if ((*buffer != '\n') && av[0]){
            pid = fork();
            if (pid == 0){
                if (execve(av[0], av, envp) == -1){
                    perror("./shell");
                    exit(127);
                }
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
    return (EXIT_SUCCESS);
}
