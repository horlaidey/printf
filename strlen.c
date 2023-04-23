#include "main.h"
/**
 * _strlen - Counts the number of character in a string
 * @str: The input string
 *
 * Return: Returns the integer counts of the string length
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
