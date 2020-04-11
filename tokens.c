#include "header.h"
void split(char *buffer, char **av)
{
    char *token;
  
    int i = 0;
  
    token = strtok(buffer, "\t\n\a\r ");
    ///
    while (token != NULL)
    {
        av[i] = token;
        i++;
        token = strtok(NULL, " \t\n\r");
      
    }
 
    av[i] = NULL;
}