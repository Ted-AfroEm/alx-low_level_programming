#include "main.h"

/**
 * puts2 - print each character followed by a newline
 * @str: pointer for string
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
