#include "main.h"

/**
 * _printchar - prints character to stdout
 * @list: char input from the stdarg
 * @buff: pointer to the buffer
 * @index: position of the buffer pointer
 * Return: 1 on success
 */

int _printchar(va_list list, char *buff, unsigned int index)
{
	char c;

	c = va_arg(list, int);
	handle_print(buff, c, index);

	return (1);
}
