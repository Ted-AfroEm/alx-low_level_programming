#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string pointer
 *
 * Return: encoded string pointer
 */
char *rot13(char *s)
{
	char *p;
	char letters[52] = {
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		'U', 'V', 'W', 'X', 'Y', 'Z',
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'w', 'y', 'z'};
	char encoderot13[52] = {
		'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L', 'M',
		'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
		'h', 'i', 'j', 'k', 'l', 'm'};
	int i = 0;

	p = s;
	while (*s != '\0')
	{
		while (i < 52)
		{
			if (*s == letters[i])
			{
				*s = encoderot13[i];
			}
			i++;
		}
		i = 0;
		s++;
	}

	s = p;
	return (s);
}
