#include "holberton.h"
#include <string.h>
/**
 *get_function - selects the right function corresponding to format specified
 *@s:input format
 *Return:pointer to function that corresponds with specified format
 *
 */
int (*get_function(char *s))(va_list list)
{
