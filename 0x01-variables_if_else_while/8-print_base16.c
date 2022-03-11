#include <stdio.h>

/**
 * main - print base 16 in lowercase
 *
 * Description: print 1-f ( base 16 ) using putchar
 *
 * Return: 0
 */

int main(void)
{
	char x[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
		    '9', 'a', 'b', 'c', 'd', 'e', 'f', };
	int i = 0;

	while (i < 16)
	{
		putchar(x[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
