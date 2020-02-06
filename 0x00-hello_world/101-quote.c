#include <unistd.h>
#include <fcntl.h>

/**
 * main - print a mesage
 * write - write to a file descriptor
 * function: main
 * Description : error
(*
 * Return: print text
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015 - 10 - 19\n", 59);
	return (1);
}
