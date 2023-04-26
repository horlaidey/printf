#include "main.h"
/**
 * _putnoct - print the number in octal begining with zero
 * @list: input string
 * @buff: buffer pointer
 * @index: index for buffer pointer
 * Return: number of chars printed
 */
int _putnoct(va_list list, char *buff, unsigned int index)
{
	int int_input, i, isnegative, count, first_digit;
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
	index = handle_print(buff, '0', index);
	binary = malloc(sizeof(char) * (32 + 1));
	binary = binary_array(binary, int_input, isnegative, 32);
	octal = malloc(sizeof(char) * (11 + 1));
	octal = oct_array(binary, octal);
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
	return (count + 1);
}
