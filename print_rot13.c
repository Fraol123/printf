/**
 *print_rot13 - prints a string in rot13 format
 *@list:list to increment
 *Return:no. of characters printed
 */
int print_rot13(va_list list)
{
	char *s = va_arg(list, char *);
	int i, j;
