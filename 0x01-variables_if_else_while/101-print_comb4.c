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
	int d2, d1;
	d2 = 0;
	d1 = 0;

	while (d2 < 10)
	{
		while(d1 < 10)
		{
			if(d1 == d2){
				d1++;
			}
			else if((d2 * 10 + d1) > (d1 * 10 + d2))
			{
				d1++;
			}
			else {
				putchar((d2 % 10) + '0');
				putchar((d1 % 10) + '0');
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
