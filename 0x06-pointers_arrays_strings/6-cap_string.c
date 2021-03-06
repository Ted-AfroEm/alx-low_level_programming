#include "main.h"

/**
 * cap_string - changes all lowercase word of a string
 * to uppercase
 * @s: pointer to string
 *
 * Description: this is a function that change to uppercase
 *
 * Return: return s
 */
char *cap_string(char *s)
{
	char *p;

	p = s;
	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 122)
		{
			if (*(s - 1) == 32 ||
			    *(s - 1) == 9 ||
			    *(s - 1) == 10 ||
			    *(s - 1) == 44 ||
			    *(s - 1) == 59 ||
			    *(s - 1) == 46 ||
			    *(s - 1) == 33 ||
			    *(s - 1) == 63 ||
			    *(s - 1) == 34 ||
			    *(s - 1) == 40 ||
			    *(s - 1) == 41 ||
			    *(s - 1) == 123 ||
			    *(s - 1) == 125)
			{
				*s = *s - 32;
			}
		}
		s++;
	}

	s = p;
	return (s);
}
