#include "header.h"  
// Most of the C compilers support a third parameter to main which 
// store all envorinment variables 
int print_e(char **arg) 

{ 
    //char *envp[] = {NULL};
    int i; 
    for (i = 0; arg[i] != NULL; i++) 
        printf("\n%s", arg[i]); 
    getchar(); 
    return 0; 
} 
/*int main(int argc, char *argv[], char * envp[]) 
{

	

	print_e(envp);
	
	return(0);
}*/
