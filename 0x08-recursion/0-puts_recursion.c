#include "main.h"

/**
 * _puts_recursion -  prints a string
 * @s: the string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')	/* where there is a NULL character print a newline.
			* *s is dereferencing the values that are stored in s.
			* char *s is a pointer that stores the
			* address of the first memory of the strings.i
			*/
	{
		_putchar('\n');
			return;
	}
	_putchar(*s);	 /* *s is dereferencing the values that are stored in s*/
	s++;
	_puts_recurision(s);
}
