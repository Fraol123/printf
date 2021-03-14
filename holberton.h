#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *struct ops - contains format and corresponding function
 *
 *@op:operation to perform
 *
 *@func:function to call
 */
typedef struct ops
{
	char operation;
	int (*func)(va_list);
} ops_f;
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list list);
int print_num(va_list list);
int print_string(va_list list);
int (*get_func(char ch))(va_list);
int print_nan(char ch1, char ch2);
#endif /*HOLBERTON_H*/
