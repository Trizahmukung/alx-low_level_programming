#include "main.c"

/**
 * print_alphabet - function to print abc
 *
 * Decription: function print_alphabet() to print alphabet in lower case
 * Return: Always 0.
 */
void print_alphabet(void)
{

	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

