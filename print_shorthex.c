#include "main.h"
/**
 * _puthhex - prints a short decimal in hexadecimal
 * @list: input string
 * @buff: buffer pointer
 * @index: index for buffer pointer
 * Return: number of chars printed
 */
int _puthhex(va_list list, char *buff, unsigned int index)
{
	short int int_input, i, isnegative, count, first_digit;
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

	binary = malloc(sizeof(char) * (16 + 1));
	binary = binary_array(binary, int_input, isnegative, 16);
	hexadecimal = malloc(sizeof(char) * (4 + 1));
	hexadecimal = hex_array(binary, hexadecimal, 0, 4);
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
	return (count);
}
