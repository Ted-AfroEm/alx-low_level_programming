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
printf("is postive\n");
else if (n < 0)
printf("is zero\n");
else
printf("is negative\n");

return (0);
}
