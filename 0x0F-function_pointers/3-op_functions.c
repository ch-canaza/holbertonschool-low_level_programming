#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *op_add - add two int
 *@a: integer
 *@b: integer
 *Return: sum of integer
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - sustraccion two int
*@a: integer
*@b: integer
*Return: substraccion of integer
*/

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multipl two int
 *@a: integer
 *@b: integer
 *Return: product of integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - division two int
 *@a: integer
 *@b: integer
 *Return: product of integer
 */

int op_div(int a, int b)
{
	if (b < a || b <= 0)
		return (a / b);
	printf("ERROR\n");
	exit (100);
}
/**
 *op_add - modulus two int
 *@a: integer
 *@b: integer
 *Return: rest of integer
 */

int op_mod(int a, int b)
{
	if (b < a || b <= 0)
		return (a % b);
	printf("ERROR\n");
	exit (100);
}
