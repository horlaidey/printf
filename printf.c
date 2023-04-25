#include "main.h"

/**
 * _printf - prints to the standard output
 * @format: the first argument indicating the format of output
 *
 * Return: Number of character printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, index = 0, j = 0;
	va_list args;
	int (*funct)(va_list, char *, unsigned int);
	char *buff;

	va_start(args, format);
	buff = malloc(sizeof(char) * 1024);
	if (!format || !buff || (format[i] == '%' && !format[i + 1]))
	{
		return (-1);
	}
	if (!format[i])
	{
		return (0);
	}
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				print_buffer(buff, index);
				free(buff);
				va_end(args);
				return (-1);
			}
			else
			{
				funct = get_fmt(format, i + 1);
				if (funct == NULL)
				{
					if (format[i + 1] == ' ' &&
					!format[i + 2])
					{
						return (-1);
					}
					handle_print(buff, format[i], index);
					j++;
					i--;
				}
				else
				{
					j += funct(args, buff, index);
					i += print_func(format, i + 1);
				}
			}
			i++;
		}
		else
		{
			handle_print(buff, format[i], index);
			j++;
		}
		for (index = j; index > 1024; index -=1024)
		{
			;
		}
	}
	print_buffer(buff, index);
	free(buff);
	va_end(args);
	return (j);
}
