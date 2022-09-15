#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: letter being tested
 * Return: 1 if success . 0 if else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
