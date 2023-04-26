#include "main.h"
/**
 * _putusr - prints a string and values of
 * non-printed chars
 * @list: input string
 * @buff: buffer pointer
 * @index: index for buffer pointer
 * Return: number of chars printed
 */
int _putusr(va_list list, char *buff, unsigned int index)
{
	unsigned char *str;
	char *hexadecimal, *binary;
	unsigned int i, sum, op;

	str = va_arg(list, unsigned char *);
	binary = malloc(sizeof(char) * (32 + 1));
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	for (sum = i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			index = handle_print(buff, '\\', index);
			index = handle_print(buff, 'x', index);
			op = str[i];
			binary = binary_array(binary, op, 0, 32);
			hexadecimal = hex_array(binary, hexadecimal, 1, 8);
			index = handle_print(buff, hexadecimal[6], index);
			index = handle_print(buff, hexadecimal[7], index);
			sum += 3;
		}
		else
			index = handle_print(buff, str[i], index);
	}
	free(binary);
	free(hexadecimal);
	return (i + sum);
}
