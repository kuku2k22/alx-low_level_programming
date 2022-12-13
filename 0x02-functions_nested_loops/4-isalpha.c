#include "main.h"

/**
 *  _isalpha - checks for char alphabet
 *  @c: the char to be checked
 *  Description: checks for_isalphs
 *
 *  Return: 1 if char is letter lower or upper, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
