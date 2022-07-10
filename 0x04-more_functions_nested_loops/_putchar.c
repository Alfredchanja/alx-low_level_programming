#include <unistd.h>

/**
 * _putchar - write the characteri to stdout
 * @c: the character to print 
 * Return: on Success 1.
 * on error, -1 is returned, and on errno is set qpproriately.
 */
int _putchar(char i)
{
	return (write (1, &i, 1));
}
