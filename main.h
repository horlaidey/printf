#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct func - struct type for print functions
 * @fmt: format specifier
 * @fn: pointer function to prints functions
 *
 * Description: This struct data type stores
 * pointer to the different print functions.
 */
typedef struct func
{
	char *fmt;
	int (*fn)(va_list, char *, unsigned int);
} print_fn;

int (*get_fmt(const char *str, int index))(va_list, char *, unsigned int);
int print_func(const char *str, int index);
unsigned int handle_print(char *buffer, char c, unsigned int index);
int print_buffer(char *buffer, unsigned int buff_num);
char *binary_array(char *binary, long int int_in, int is_neg, int lim);
char *oct_array(char *bnr, char *oct);
char *long_oct_array(char *bnr, char *oct);
char *short_oct_array(char *bnr, char *oct);
char *hex_array(char *bnr, char *hex, int is_upp, int lim);

int _putchar(char);
int _printf(const char *format, ...);
int _printchar(va_list list, char *buff, unsigned int index);
int _putint(va_list list, char *buff, unsigned int index);
int _putuint(va_list list, char *buff, unsigned int index);
int _binary(va_list list, char *buff, unsigned int index);
int _printstr(va_list list, char *buff, unsigned int index);
int _putoct(va_list list, char *buff, unsigned int index);
int _puthex(va_list list, char *buff, unsigned int index);
int _putHEX(va_list list, char *buff, unsigned int index);
int _putusr(va_list list, char *buff, unsigned int index);
int _putadd(va_list list, char *buff, unsigned int index);
int _putrev(va_list list, char *buff, unsigned int index);
int _putrot(va_list list, char *buff, unsigned int index);
int _putlint(va_list list, char *buff, unsigned int index);
int _putluint(va_list list, char *buff, unsigned int index);
int _putloct(va_list list, char *buff, unsigned int index);
int _putlhex(va_list list, char *buff, unsigned int index);
int _putlHEX(va_list list, char *buff, unsigned int index);
int _puthint(va_list list, char *buff, unsigned int index);
int _puthuint(va_list list, char *buff, unsigned int index);
int _puthoct(va_list list, char *buff, unsigned int index);
int _puthhex(va_list list, char *buff, unsigned int index);
int _puthHEX(va_list list, char *buff, unsigned int index);
int _putpint(va_list list, char *buff, unsigned int index);
int _putnoct(va_list list, char *buff, unsigned int index);
int _putnhex(va_list list, char *buff, unsigned int index);
int _putnHEX(va_list list, char *buff, unsigned int index);
int _putsint(va_list list, char *buff, unsigned int index);
int _putcent(va_list __attribute__((unused)), char *, unsigned int);

#endif
