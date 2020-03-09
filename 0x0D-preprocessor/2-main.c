#include <stdio.h>
#define FILENAME_H

/**
 * main - verify code
 *
 * return: 0
 */

int main (void)
{
	#ifdef FILENAME_H
	printf("%s\n",__FILE__);
	#endif
		return (0);
}
