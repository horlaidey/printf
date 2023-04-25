#include "main.h"

int main(void)
{
	char *name = "Horlaidey Ijaya";
	char identifier = 'I';
	int lent, len;

	lent = _printf("This is a counted string\n");
	_putchar('\n');
	_printf("Hello %c'm Mr. %s the %d\n", identifier, name, -762534);
	_printf("This number: %b is a binary value of %i\n", 98, 98);
	_printf("The length: [%d, %i] are good\n", lent, lent);
	len = _printf("hello %d, %s\n", 98, NULL);
	_printf("len value: %d %%\n", len);
	_putchar('\n');
	return (0);
}
