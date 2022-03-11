#include <stdio.h>

/**
 * main - prints 0-9
 *
 * Description: prints 0-9 using using
 * putchar()
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar((i % 10) + '0');
		i++;
	}

	putchar('\n');
	return (0);
}
