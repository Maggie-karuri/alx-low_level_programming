#include <stdio.h>

/**
 * main - entry point
 *
 * Description: the program prints both lowercase and uppercase
 *
 * Return: returns 0 if successful
 */

int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch)
for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch)

putchar('\n');
return (0);
}
