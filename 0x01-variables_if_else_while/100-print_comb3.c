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
	int num1, num2;

	num1 = 0;
	num2 = 0;

	while (i < 100)
	{
		putchar((num1 % 10) + '0');
		putchar((num2 % 10) + '0');
		i++;
		num1++;
		num2++;
		if (i == 100)
			break;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
