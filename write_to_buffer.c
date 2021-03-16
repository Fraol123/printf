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
/**
 *_write_str - Add string to buffer, write and reset buffer if full.
 *@b_r: buffer to write
 *@s: string to write
 */
void _write_str(buffer *b_r, char *s)
{
	while (*s != '\0')
	{
		if (b_r->bp == 1024)
		{
			write(1, b_r->buf, b_r->bp);
			b_r->printed += b_r->bp;
			b_r->bp = 0;
		}
		b_r->buf[b_r->bp++] = *s++;
	}
}
/**
 * _write_tmpbuf - Add tmpbuf to buffer, write and reset buffer if full.
 * @b_r: buffer to write
 */
void _write_tmpbuf(buffer *b_r)
{
	int i;

	i = 0;
	while (i < b_r->tp)
	{
		if (b_r->bp == 1024)
		{
			write(1, b_r->buf, b_r->bp);
			b_r->printed += b_r->bp;
			b_r->bp = 0;
		}
		b_r->buf[b_r->bp++] = b_r->tmpbuf[i];
	}
}
