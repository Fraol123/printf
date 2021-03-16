#include "holberton.h"
/**
 *convert_R- converts a string to root 13
 *@args: A va_list pointing to the string to be converted
 *Return: s
 */
unsigned int convert_R(va_list args, unsigned  char *s)
{

	int i, j;

	char src[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char dest[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";


	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (src[j] == *(s + i))
			{
				*(s + i) = dest[j];
				break;
			}
		}
	}
	return (s);
}
