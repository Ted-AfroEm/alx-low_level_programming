#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: nothing
 */
void times_table(void)
{
	int n, i, mul;

	n = 0;
	i = 0;
	mul  = 0;
	while (n <= 9)
	{
		while (i <= 9)
		{
			mul = i * n;
			if (mul < 10 && i != 0)
				_putchar(' ');
			if (i != 0)
				_putchar(' ');
			printNum(mul);
			if (i == 9)
				break;
			_putchar(',');
			i++;
		}
		_putchar('\n');
		n++;
		i = 0;
	}
}

void printNum(int n)
{
       	if (n / 10){
		printNum(n / 10);
	}
	_putchar('0' + n % 10);
}
