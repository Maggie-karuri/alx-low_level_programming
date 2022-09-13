#include <stdio.h>

/**
 * main - entry point
 *
 * Description: the program prints all alphabets in lower cases except q and e
 * followed by a new line
 * Return : always 0 success
 */

int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
