#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 *
 * Return: nothing.
 */
void puts_half(char *str)
{
	int strlen, n;
	char *p;

	strlen = 0;
	n = 0;
	p = str;
	while (*str != '\0')
	{
		strlen++;
		str++;
	}
	if (strlen % 2 == 0)
	{
		n = strlen / 2;
	}
	else
	{
		n = (strlen - 1) / 2;
	}
	str = p;
	str = str + n;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
