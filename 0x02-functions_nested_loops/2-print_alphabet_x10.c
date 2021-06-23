#include "holberton.h"
/**
 * print_10 alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= '75')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
