#include <stdio.h>

/**
 * main - alphabet game
 *
 * Description: prints all lower case letters
 * staarting from a-z using putchar() then
 * uppercase letters A-Z
 *
 * Return: 0
 */

int main(void)
{
char lowerCase, upperCase;

lowerCase = 'a';
upperCase = 'A';

while (lowerCase <= 'z')
{
	putchar(lowerCase);
	lowerCase++;
}

while (upperCase <= 'Z')
{
	putchar(upperCase);
	upperCase++;
}

putchar('\n');

return (0);
}
