#include "main.h"
/**
 * _memset - fill memory
 * @s - input string
 * @b - input character
 * @n - input size
 *
 * Description: fill memory with cost char
 *
 * return: returns the pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
