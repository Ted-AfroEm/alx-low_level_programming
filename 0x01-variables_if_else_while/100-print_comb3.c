#include <stdio.h>

/**
 * main - print two digit numbers ,
 *
 * Description: prints 1-9 using putchar()
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int digit1, digit2;

	digit1 = 0;
	digit2 = 0;

	while (i < 100)
	{
		while(digit1 < 10)
		{
		if(digit1 != digit2 && digit2 > digit1)
		{
			putchar((digit2 % 10) + '0');
			putchar((digit1 % 10) + '0');
			if (i == 100)
			break;
			putchar(',');
			putchar(' ');
		}
		i++;
		digit1++;
		}
		if(digit2 == 10)
			digit2 = 0;
		digit1 = 0;
		digit2++;
	}

	putchar('\n');
	return (0);
}
