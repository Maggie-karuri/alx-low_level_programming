#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- prints whether the value is positive, zero or negative.
 *
 * Description: uses the main funtion
 * The program checks if the value is positive, negative, or zero
 * Return 0 if successfull
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
i}
return (0);
}