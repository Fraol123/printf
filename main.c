#include  "holberton.h"
#include <stdio.h>

int main(void)
{
	int i = 20;
	char *str = hex_conv(i);

	printf("%s", str);
}
