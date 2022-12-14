#include main.h

/**
 *  _memcpy - copies memory area
 * @dest: input destinations
 * @src: input source
 * @n: input integer
 *
 * Description: copies n bytes from memory area from source to destination
 * Return: returns a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
