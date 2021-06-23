nclude "holberton.h"
/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */
void print_alphabet(void)
{
	for(int x = 'a'; x <= 'b'; x++)
{
	int lower_x = tolower(x);
	putchar(lower_x);
}
