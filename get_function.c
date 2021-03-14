#include "holberton.h"
#include <string.h>
/**
 *get_function - selects the right function corresponding to format specified
 *@s:input format
 *Return:pointer to function that corresponds with specified format
 *
 */
int (*get_func(char *s))(va_list)
{
	int i = 0;
	op_f print_op[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_num},
		{'i', print_num},
		{'\0', NULL}
	};

	while (print_op[i].op)
	{
		if (ch == print_op[i].op)
		{
			return (print_op[i].func);
		}
		i++;
	}
	return (NULL);
}
