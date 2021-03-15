#include <stdio.h>
/**
 *base_len - finds the length of a number
 *
 *@base:base to be calculated in
 *Return:length
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}
/**
 *hex_conv - converts a number to any base specified by user
 *@num:number to convert
 *Return:pointer to converted string
 */
int hex_conv(int num)
{
	char *str;
	int i, j, len;

	len = base_len(num);
	str = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
		return (-1);
	if (num == 0)
	{
		str[i] = 0;
	}
	while (num > 0)
	{
		if (num % 16 < 10)
		{
			str[i] = (num % 16) + 48;
		}
		else
		{
			str[i] = (num % 16) + 55;
		}
	}
	rev_string(str);
	return (str);
}
