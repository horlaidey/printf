#include "main.h"
/**
 * _puthoct - prints long decimal number in octal
 * @list: input number
 * @buff: buffer pointer
 * @index: index for buffer pointer
 * Return: number of chars printed.
 */
int _puthoct(va_list list, char *buff, unsigned int index)
{
	short int int_input, i, isnegative, count, first_digit;
	char *octal, *binary;

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
	octal = malloc(sizeof(char) * (6 + 1));
	octal = short_oct_array(binary, octal);
	for (first_digit = i = count = 0; octal[i]; i++)
	{
		if (octal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			index = handle_print(buff, octal[i], index);
			count++;
		}
	}
	free(binary);
	free(octal);
	return (count);
}
