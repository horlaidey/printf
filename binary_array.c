#include "main.h"

/**
 * binary_array - prints decimal in binary
 * @binary: pointer to binary
 * @int_in: input number
 * @is_neg: if input number is negative
 * @lim: size of the binary
 * Return: number of chars printed.
 */
char *binary_array(char *binary, long int int_in, int is_neg, int lim)
{
	int i;

	for (i = 0; i < lim; i++)
		binary[i] = '0';
	binary[lim] = '\0';
	for (i = lim - 1; int_in > 1; i--)
	{
		if (int_in == 2)
		{
			binary[i] = '0';
		}
		else
		{
			binary[i] = (int_in % 2) + '0';
		}
		int_in /= 2;
	}
	if (int_in != 0)
	{
		binary[i] = '1';
	}
	if (is_neg)
	{
		for (i = 0; binary[i]; i++)
		{
			if (binary[i] == '0')
			{
				binary[i] = '1';
			}
			else
			{
				binary[i] = '0';
			}
		}
	}
	return (binary);
}

