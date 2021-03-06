#include "main.h"

/**
 * leet - encodes string to 1337
 * @s: pointer for the string
 *
 * Return: s string pointer
 */
char *leet(char *s)
{
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char encode[] = {'4', '3', '0', '7', '1'};
	char *p;
	int i = 0;

	p = s;
	while (*s != '\0')
	{
		while (i < 5)
		{
			if (*s == lower[i] || *s == upper[i])
			{
				*s = encode[i];
			}
			i++;
		}
		i = 0;
		s++;
	}

	s = p;
	return (s);
}
