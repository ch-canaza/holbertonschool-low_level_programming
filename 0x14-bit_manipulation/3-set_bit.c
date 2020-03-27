/**
 * set_bit - get bit value at an index
 *@n : integer to get value
 *@index: index of n
 * Return: bit founded
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bin_numb;


	bin_numb = sizeof(n) * 8 - 1;

	if (index > bin_numb)
		return (-1);
	bin_numb = 1 << index;
	*n = *n | bin_numb;
	return (1);
}
