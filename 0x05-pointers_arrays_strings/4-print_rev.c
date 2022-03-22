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

	p = s - 1;
	while (*s != '\0')
	{
		s++;
	}
	while (s != p)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
