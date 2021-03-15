#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct ops - a structure containing a char to compare with format modifiers
 * and then choose the right function when it matches
 * @operation: the char we want to compare to
 * @func: the address of the function we want to return if a char matches
 */
typedef struct ops
{
	char operation;
	int (*func)(va_list);
} ops_f;

int _printf(const char *format, ...);
int _putchar(char c);
int (*get_func(char ch))(va_list);
int print_char(va_list list);
int print_string(va_list list);
int print_nan(char ch1, char ch2);
int print_num(va_list list);
unsigned int base_len(unsigned int num, int base);
int print_binary(va_list list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_Hex(va_list list);


#endif /*HOLBERTON_H*/
