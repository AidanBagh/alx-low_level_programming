#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
