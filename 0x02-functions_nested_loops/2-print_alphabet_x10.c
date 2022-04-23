#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
		i++;
	}
}
