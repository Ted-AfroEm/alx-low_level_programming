#include "main.h"

/**
 * _islower - return 1 if true
 * @c:ascii code
 *
 * Return: 1 if true else 0
 */
int _islower(int c)
{
	if (c > 97 && c < 122)
		return (1);
	else
		return (0);
}
