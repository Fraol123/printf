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
struct ops
{
	char *op;
	int (*fun)(va_list);
};
typedef struct ops op_f;
int printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list va);
int print_d(va_list va);
int print_string(va_list va);
int (*get_func(char ch))(va_list);

#endif /*HOLBERTON_H*/
