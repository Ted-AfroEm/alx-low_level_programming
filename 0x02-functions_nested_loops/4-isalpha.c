#include "main.h"

/**
 * _isalpha - check if letter
 * @c: ascii code
 *
 * Return: 1 if true else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
