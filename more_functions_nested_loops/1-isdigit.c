#include "main.h"

/**
 * _isdigit(int c) : checks for digit
 * @c : The caracter to check
 *
 * Return 1 for a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return(0);
}
