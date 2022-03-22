#include "main.h"

/**
 * rev_sting - reverses a sting
 * @s: pointer to string
 *
 * Description: This functions reverses given string using pointer
 *
 * Return: nothing
 */
void rev_string(char *s)
{

	char *p;
	char swapf, swapl;

	p = s;
	if (*s != '\0')
	{
		while (*s != '\0')
		{
			s++;
		}
		s--;
		while (s != p)
		{
			swapf = *p;
			swapl = *s;
			*p = swapl;
			*s = swapf;
			p++;
			s--;
		}
	}
}
