#include "main.h"

/**
 * _putrev - writes the str in reverse
 * @list: input string
 * @buff: buffer pointer
 * @index: index for buffer pointer
 * Return: number of chars printed.
 */
int _putrev(va_list list, char *buff, unsigned int index)
{
	char *str;
	unsigned int i;
	int j = 0;
	char nill[] = "(llun)";

	str = va_arg(list, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			index = handle_print(buff, nill[i], index);
		return (6);
	}
	for (i = 0; str[i]; i++)
		;
	j = i - 1;
	for (; j >= 0; j--)
	{
		index = handle_print(buff, str[j], index);
	}
	return (i);
}
