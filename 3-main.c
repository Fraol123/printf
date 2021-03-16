#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int x = 10;
	char *s;

	s = hex_conv(x);
	printf("string:%s\n", s);
	return (0);
}
