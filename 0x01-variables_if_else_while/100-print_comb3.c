#include <stdio.h>

/**
 * main - print combination of two digits
 *
 * Description: prints combination two digits
 * with condtions using putchar()
 *
 * Return: 0
 */

int main(void)
{
	int d2, d1;

	d2 = 0;
	d1 = 0;

	while (d2 < 10)
	{
		while (d1 < 10)
		{
			if (d1 == d2)
			{
				d1++;
			}
			else if ((d2 * 10 + d1) > (d1 * 10 + d2))
			{
				d1++;
			}
			else
			{
				putchar((d2 % 10) + '0');
				putchar((d1 % 10) + '0');
				if (d2 == 8 && d1 == 9)
					break;
				putchar(',');
				putchar(' ');
				d1++;
			}
		}
		d2++;
		d1 = 0;
	}

	putchar('\n');
	return (0);
}
