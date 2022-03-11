#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check n if +ve, -ve or 0
 *
 * Return: 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%u is postive\n", n);
else if (n < 0)
printf("%u is negative\n", n);
else
printf("%u is zero\n", n);

return (0);
}
