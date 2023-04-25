#include "main.h"
/**
 * _putloct - prints long decimal number in octal
 * @list: input number
 * @buff: buffer pointer
 * @index: index for buffer pointer
 * Return: number of chars printed.
 */
int _putloct(va_list list, char *buff, unsigned int index)
{
	long int input, i, is_neg, len, int_tmp;
	char *oct, *binr;

	input = va_arg(list, long int);
	is_neg = 0;
	if (input == 0)
	{
		index = handle_print(buff, '0', index);
		return (1);
	}
	if (input < 0)
	{
		input = (input * -1) - 1;
		is_neg = 1;
	}

	binr = malloc(sizeof(char) * (64 + 1));
	binr = binary_array(binr, input, is_neg, 64);
	oct = malloc(sizeof(char) * (22 + 1));
	oct = long_oct_array(binr, oct);
	for (int_tmp = i = len = 0; oct[i]; i++)
	{
		if (oct[i] != '0' && int_tmp == 0)
			int_tmp = 1;
		if (int_tmp)
		{
			index = handle_print(buff, oct[i], index);
			len++;
		}
	}
	free(binr);
	free(oct);
	return (len);
}
