#include "main.h"

/**
 * _pow_recursion - function that returns the value of
 * x raise to the power of y.
 * @x: an integer
 * @y: an integer
 *
 * Return: integer power value.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recusion(x, y - 1));
}