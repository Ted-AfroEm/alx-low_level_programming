#include <stdio.h>

/**
 * main - prints 0-9
 *
 * Description: prints from 0-9
 *
 * Return: 0
 */

int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		printf("%i", i);
		i++;
	}
	putchar('\n');
	return (0);
}
