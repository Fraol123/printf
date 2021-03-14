#include "holberton.h"

/**
 * get_func - contains a struct to scan chars to
 * choose the right function to pass back
 * @ch: character to check
 * Return: the pointer to the appropriate function or NULL if nothing matches
 */
int (*get_func(char ch))(va_list)
{
	ops_f print_op[] = {
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
