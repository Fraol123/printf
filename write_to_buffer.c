#include "holberton.h"
/**
 *_write - Add char to buffer, write and reset buffer if full.
 *@b_r: buffer to write
 *@c: char to write
 */
void _write(buffer *b_r, char c)
{
	if (b_r->bp == 1024)
	{
		write(1, b_r->buf, b_r->bp);
		b_r->printed += b_r->bp;
		b_r->bp = 0;
	}
	b_r->buf[b_r->bp++] = c;
}
