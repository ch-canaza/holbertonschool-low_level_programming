#include <stdio.h>
/**
 *add - adds two values
 *@a: first value
 *@b: second value
 *Return: sum result
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 *sub - substract value a - b
 *@a: first value
 *@b: second value
 *Return: substract result
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 *mul - multiply two values
 *@a: first value
 *@b: second value
 *Return: Mult result
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 *div - returns the division result
 *if b == 0 returns null
 *@a: numerator
 *@b: denominator
 *Return: division result
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
	}
	return (a / b);
}
/**
 *mod - returns the mod between a and b
 *checks if b == 0
 *@a: denominator
 *@b: dividen
 *Return: reminder of a / b
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
	}
	return (a % b);

}
