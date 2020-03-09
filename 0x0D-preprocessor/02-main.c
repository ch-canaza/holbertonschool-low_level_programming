#include <stdio.h>
#define FILENAME

/**
 * main - verify code
 *
 * return: 0
 */

int main (void)
{
	#ifdef FILENAME
	printf("%s\n",__FILE__);
	#endif
		return (0);
}
