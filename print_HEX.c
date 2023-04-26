#include "main.h"
/**
 * _putHEX - prints a decimal in hexadecimal
 * @list: The character to print
 * @buff: buffer pointer
 * @index: index for buffer pointer
 * Return: number of chars printed
 */
int _putHEX(va_list list, char *buff, unsigned int index)
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
	binary = malloc(sizeof(char) * (32 + 1));
	binary = binary_array(binary, int_input, isnegative, 32);
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	hexadecimal = hex_array(binary, hexadecimal, 1, 8);
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
