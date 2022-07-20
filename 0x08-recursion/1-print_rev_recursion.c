#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: the string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')	/* Condition for the values stored in s*/
		return;

	s++; /* Finds the address of each character
		*/
	_print_rev_recursion(s);/* The address of the first character
				   */
	s--;	/* The adress of each character from the last
		   */
	_putchar(*s);	/* Prints the values found in
			 * these characters from the last character
			 */
}
