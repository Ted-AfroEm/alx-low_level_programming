#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the last digit
 *
 * Description: This program task the last digit
 * of a number then compare the last digit on a
 * given there condtions.
 *
 * Return: 0
 */
int main(void)
{
int n, lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;

lastDigit = n % 10;

printf("Last digit of %i is %i ", n, lastDigit);

if (lastDigit > 5)
printf("and is greater than 5");
else if (lastDigit < 6 && lastDigit != 0)
printf("and is less than 6 and not 0");
else
printf("and is 0");

return (0);
}
