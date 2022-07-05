#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: int to check
 * Return: 1 if c is a letter, lower or uppercase
 * otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
