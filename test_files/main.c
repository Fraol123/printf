#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int *p = &n;
	printf("%p\n", p);
	printf("%x\n", p);
	printf("%d\n", p);
}
