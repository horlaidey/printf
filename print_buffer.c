#include "main.h"

/**
 * print_buffer - prints the buffers
 * @buffer: pointer to a buffer string
 * @buff_num: Number of buffer bytes to print
 * Return: Total Number of bytes printed
 */
int print_buffer(char *buffer, unsigned int buff_num)
{
	return (write(1, buffer, buff_num));
}
