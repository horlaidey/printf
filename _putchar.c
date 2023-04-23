#include "main.h"
/**
 * _putchar - prints the input character to the stdoutput
 * @c: the input character
 *
 * Return: return the integer value of the input char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
