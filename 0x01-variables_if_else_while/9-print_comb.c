#include <stdio.h>

/**
 * main - print 1 - 9 by separated by ,
 *
 * Description: prints 1-9 using putchar()
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar((i % 10) + '0');
		putchar(',');
		putchar(' ');
		i++;
	}

	putchar('\n');
	return (0);
}
