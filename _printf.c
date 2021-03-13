#include <unistd.h>
/**
 *_printf - writes a character to stdout
 *@c:charcter to print
 *Return:1 - on success, -1 on error
 *
 */
int _printf(char c)
{
	return(write(1, &c, 1));
}
