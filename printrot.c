#include "main.h"

/**
 * _putrot - writes the str in ROT13
 * @list: input string
 * @buff: buffer pointer
 * @index: index for buffer pointer
 * Return: number of chars printed.
 */

int _putrot(va_list list, char *buff, unsigned int index)
{
	char alf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;
	unsigned int i, j, k;
	char nill[] = "(avyy)";

	str = va_arg(list, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			index = handle_print(buff, nill[i], index);
		return (6);
	}
	for (i = 0; str[i]; i++)
	{
		for (k = j = 0; alf[j]; j++)
		{
			if (str[i] == alf[j])
			{
				k = 1;
				index = handle_print(buff, rot[j], index);
				break;
			}
		}
		if (k == 0)
			index = handle_print(buff, str[i], index);
	}
	return (i);
}
