#include "main.h"
/**
 * handle_print - join the characters from the buffer
 * @buffer: pointer to buffer chars
 * @c: character to be joined
 * @index: position of the pointer to buffer
 * Return: Number of characters handled
 */

unsigned int handle_print(char *buffer, char c, unsigned int index)
{
	if (index == 1024)
	{
		print_buffer(buffer, index);
		index = 0;
	}
	buffer[index] = c;
	index++;
	return (index);
}
