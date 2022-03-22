#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	char *p;

	p = s;
	while (*s != '\0')
	{
		s++;
	}
	while (s != (p - 1))
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
