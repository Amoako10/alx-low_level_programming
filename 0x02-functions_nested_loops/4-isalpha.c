#include "main.h"
/**
 * isalpha - checks for alphabets
 * @c: character to be checked
 *
 * Return: 1 (True) else 0 (False)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
