#include "main.h"
/**
 * _putstr - prints string to the standard output
 * @str: the string to be printed
 * Return: Nothing
 */

void _putstr(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
}


/**
 * _printf - prints to the standard output
 * @format: the first argument indicating the format of output
 *
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	int len = _strlen((char *)format);
	int i;
	va_list args;

	va_start(args, format);

	for (i = 0; i < len; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
		}
		if (format[i] == '%' && format[i + 1] == 's')
		{
			_putstr(va_arg(args, char *));
		}
		if (format[i] == '%' &&
		(format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			_putint(va_arg(args, unsigned int));
		}
		if (format[i] == '%' && format[i + 1] == 'b')
		{
			_binary(va_arg(args, unsigned int));
		}
		if (format[i -1] == '%')
		{
			continue;
		}
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
	}
	return (0);
}
