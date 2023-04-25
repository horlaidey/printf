#include "main.h"
/**
 * _printstr - prints input string to stdout
 * @list: string input from stdarg
 * @buff: pointer to a string buffer
 * @index: position of the chars int the buffer
 *
 * Return: 1 on success.
 */

int _printstr(va_list list, char *buff, unsigned int index)
{
	char *s;
	unsigned int i;
	char empty[] = "(null)";

	s = va_arg(list, char *);
	if (s == NULL)
	{
		for (i = 0; empty[i]; i++)
		{
			index = handle_print(buff, empty[i], index);
		}
		return (6);
	}
	for (i = 0; s[i]; i++)
	{
		index = handle_print(buff, s[i], index);
	}
	return (i);
}
