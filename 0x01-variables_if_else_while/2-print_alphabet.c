#include <stdio.h>

/**
 * main - alphabet game
 *
 * Description: prints all lower case letters
 * staarting from a-z using putchar()
 *
 * Return: 0
 */

int main(void)
{
char letter;

letter = 'a';

while (letter <= 'z')
{
	putchar(letter);
	letter++;
}

putchar('\n');

return (0);
}
