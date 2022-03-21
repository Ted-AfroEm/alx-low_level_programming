#include "main.h"

/**
 * main - print _putchar
 *
 * description: prints _putchar using _putchar.c
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char *s = "_putchar";

while (*s != '\0')
{
	_putchar(*s);
	s++;
}
_putchar('\n');
return (0);
}
