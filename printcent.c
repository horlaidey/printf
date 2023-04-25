#include "main.h"

/**
 * _printcent - prints the input char to stdout
 * @list: input char from the stdarg
 * @buff: pointer to a string buffer
 * @index: position of the char in the buffer
 *
 * Return: 1 on success
 */

int _printcent(va_list list __attribute__((unused)), char *buff,
		unsigned int index)
{
	handle_print(buff, '%', index);

	return (1);
}
