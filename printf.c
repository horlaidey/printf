#include "main.h"
/**
 * _putstr - prints string to the standard output
 * @str: the string to be printed
 * Return: Nothing
 */

int _putstr(char *str)
{
	int lent;

	if (str == NULL)
	{
		str = "(null)";
	}
	lent = _strlen(str);

	return (write(1, str, lent));
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
	int i, val = 0;
	char *key;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	for (i = 0; i < len; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			val++;
		}
		if (format[i] == '%' && format[i + 1] == 's')
		{
			key = va_arg(args, char *);
			_putstr(key);
			val++;
		}
		if (format[i] == '%' &&
		(format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			_putint(va_arg(args, int));
			val++;
		}
		if (format[i] == '%' && format[i + 1] == 'b')
		{
			_binary(va_arg(args, unsigned int));
			val++;
		}
		if (format[i - 1] == '%')
		{
			continue;
		}
		if (format[i] != '%')
		{
			_putchar(format[i]);
			val++;
		}
	}
	return (val);
}
