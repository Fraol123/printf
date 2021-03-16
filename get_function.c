#include "holberton.h"

/**
 *get_func - selects the right function corresponding to format specified
 *@ch:input format
 *Return:pointer to function that corresponds with specified format
 *
 */
int (*get_func(char ch))(va_list)
{
	int i = 0;
	ops_f print_op[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_num},
		{'i', print_num},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'X', print_Hex},
		{'x', print_hex},
		{'S', print_S},
		{'p', print_p},
		{'r', print_r},
		{'R', print_rot13},
		{'\0', NULL}
	};
	while (print_op[i].operation)
	{
		if (ch == print_op[i].operation)
		{
			return (print_op[i].func);
		}
		i++;

	}
	return (NULL);
}
