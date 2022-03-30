#include "main.h"

/**
 * _puts_recursion - Printd a string followed by a new line.
 * @s: Pointer to string to be printed .
 */
void _put_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s)
		_puts_recursion(s+1);	
	}
	else
		_putchar('\n');
}	
