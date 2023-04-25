#include "main.h"
/**
 * _putnhex - print number in hex begining with zero
 * @list: input string
 * @buff: buffer pointer
 * @index: index for buffer pointer
 * Return: number of chars printed
 */
int _putnhex(va_list list, char *buff, unsigned int index)
{
	int int_input, i, isnegative, count, first_digit;
	char *hexadecimal, *binary;

	int_input = va_arg(list, int);
	isnegative = 0;
	if (int_input == 0)
	{
		index = handle_print(buff, '0', index);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	index = handle_print(buff, '0', index);
	index = handle_print(buff, 'x', index);
	binary = malloc(sizeof(char) * (32 + 1));
	binary = binary_array(binr, int_input, isnegative, 32);
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	hexadecimal = hex_array(binary, hexadecimal, 0, 8);
	for (first_digit = i = count = 0; hexadecimal[i]; i++)
	{
		if (hexadecimal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			index = handle_print(buff, hexadecimal[i], index);
			count++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (count + 2);
}
