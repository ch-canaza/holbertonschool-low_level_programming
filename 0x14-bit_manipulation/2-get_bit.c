/**
 * get_bit - get bit value at an index
 *@n : integer to get value
 *@index: index of n
 * Return: bit founded
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size_bin_number;


	size_bin_number = sizeof(n) * 8 - 1;

	if (index > size_bin_number)
		return (-1);
	return ((n >> index) & 1);

}
