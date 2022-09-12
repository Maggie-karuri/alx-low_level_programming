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
char ch1;

for (ch = 'a'; ch <= 'z'; ch++)
for (ch1 = 'A'; ch1 <= 'Z'; ch1++)
{
putchar(ch);
}
{
putchar1(ch1);
}
putchar('\n');
return (0);
}
