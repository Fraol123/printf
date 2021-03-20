#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct buffer - buffer structure for our implimentation of printf
 * @buf: buffer to write characters
 * @tmpbuf: tmp buffer to write to before putting in buffer
 * @format: the string passed to our printf
 * @ap: the variadic address point
 * @bp: the current point in the buffer
 * @tp: the current point in the tmp buffer
 * @fp: the current point in the format
 * @printed: the number of chars printed from _write
 */
typedef struct buffer
{
	char *buf;
	char *tmpbuf;
	const char *format;
	va_list ap;
	int bp;
	int tp;
	int fp;
	unsigned int printed;
} buffer;
/**
 *struct handlers - handlers struct
 *@plus:'+' flag
 *@space:' ' flag
 *@hash:'#' flag
 *@zero:'0' flag
 *@minus:'-' handler
 *@width:width handler
 *@precision:precision handler
 *@h_mod:h modifier handler
 *@l_mod:l modifier handler
 */
typedef struct handlers
{
	unsigned int plus;
	unsigned int space;
	unsigned int hash;
	unsigned int zero;
	unsigned int minus;
	unsigned int width;
	unsigned int precision;
	unsigned int h_mod;
	unsigned int l_mod;
} han_s;
/**
 * struct ops - a structure containing a char to compare with formatb modifiers
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
int print_S(va_list list);
int *rev_string(char *s);
char *hex_conv(int num);
int print_p(va_list list);
int print_unsigned(va_list list);
int print_rot13(va_list list);
void _write(buffer *b_r, char c);
void _write_str(buffer *b_r, char *s);
void _write_tmpbuf(buffer *b_r);
int print_r(va_list list);




#endif /*HOLBERTON_H*/
