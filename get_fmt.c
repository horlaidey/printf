#include "main.h"
/**
 * get_fmt - selects the correct function to perform the operation.
 * @str: argument indentifier
 * @index: index for argument indentifier
 * Return: pointer to a function.
 */
int (*get_fmt(const char *str, int index))(va_list, char *, unsigned int)
{
	print_fn fp[] = {
		{"c", _printchar}, {"s", _printstr},
		{"i", _putint}, {"d", _putint},
		{"b", _binary}, {"u", _putuint},
		{"o", _putoct}, {"x", _puthex},
		{"X", _putHEX}, {"S", _putusr},
		{"p", _putadd}, {"li", _putlint},
		{"ld", _putlint}, {"lu", _putluint},
		{"lo", _putloct}, {"lx", _putlhex},
		{"lX", _putlHEX}, {"hi", _puthint},
		{"hd", _puthint}, {"hu", _puthuint},
		{"ho", _puthoct}, {"hx", _puthhex},
		{"hX", _puthHEX}, {"#o", _putnoct},
		{"#x", _putnhex}, {"#X", _putnHEX},
		{"#i", _putint}, {"#d", _putint},
		{"#u", _putuint}, {"+i", _putpint},
		{"+d", _putpint}, {"+u", _putuint},
		{"+o", _putoct}, {"+x", _puthex},
		{"+X", _putHEX}, {" i", _putsint},
		{" d", _putsint}, {" u", _putuint},
		{" o", _putoct}, {" x", _puthex},
		{" X", _putHEX}, {"R", _putrot},
		{"r", _putrev}, {"%", _putcent},
		{"l", _putcent}, {"h", _putcent},
		{" +i", _putpint}, {" +d", _putpint},
		{"+ i", _putpint}, {"+ d", _putpint},
		{" %", _putcent}, {NULL, NULL},
	};
	int i = 0, j = 0, first_index;
	first_index = index;
	while (fp[i].fmt)
	{
		if (str[index] == fp[i].fmt[j])
		{
			if (fp[i].fmt[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (fp[i].fn);
}
