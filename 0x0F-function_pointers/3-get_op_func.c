#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - select function
 *@s:int symbol
 *Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i= 0;

    while (*s != *ops[i].op && i < 4)
    {
	    i++;

    }
    if (s == NULL || s[2] == '\0' || *s != *ops[i].op)
	    {
		    return(NULL);
   	    }
	    return (*ops[i].f);
	    
	    /* printf("EROR\n");
	       exit (99);*/
}
