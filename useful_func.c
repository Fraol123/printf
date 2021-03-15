#include <stdio.h>

/**
 *base_len - finds the length of a number
 *@base:base to be calculated in
 *@num: checked
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
