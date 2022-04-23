#include "main.h"

/**
 * jack_bauer - printevery minute of a day from 00:00 to 23:59
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int secDig0;
	int secDig1;
	int minDig0;
	int minDig1;

	secDig0 = 0;
	secDig1 = 0;
	minDig0 = 0;
	minDig1 = 0;
	while (minDig1 <= 2)
	{
		while (minDig0 <= 9)
		{
			while (secDig1 <= 5)
			{
				while (secDig0 <= 9)
				{
					_putchar('0' + minDig1);
					_putchar('0' + minDig0);
					_putchar(':');
					_putchar('0' + secDig1);
					_putchar('0' + secDig0);
					_putchar('\n');
					secDig0++;
				}
				secDig1++;
				secDig0 = 0;
			}
			minDig0++;
			secDig1 = 0;
		}
		minDig1++;
		minDig0 = 0;
	}

}
