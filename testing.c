#include <sys/types.h>
#include "header.h"
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int ac, char **ar)
{

	char **env = __environ;
	//char **ar;
	char *buffer = NULL;
	char *av = NULL;
	char *tok = NULL;
	int bufsize = 100;
	int pos = 0;
	char **tokens = malloc(bufsize * sizeof(char*));
	size_t size = 0;
	pid_t pid;
	int rex = 0;
	int stat;
	int g; 
	
	printf("#cisfun$ ");
	getline(&buffer, &size, stdin);
	tok = strtok(buffer, "\t\n\a\r ");
//////////////////////////////////////
/*	 while (tokens != NULL) {*/
	tokens[pos] = tok;
   	 pos++;
	// }*/
/////////////////////////////////////////	 
	pid = fork();
	if (pid == 0)
		ar = tokens;
		tok = strtok(NULL, " ");
		if (execve(ar[0], ar, NULL) == -1)
			perror("./shell");
	
	do {	
				
		wait(&stat);
	}while (stat);
	tokens[pos] = NULL;
	free(buffer);
	return (EXIT_SUCCESS);
}
