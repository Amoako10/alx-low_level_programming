#include "main.h"
/**
 * _islower - check if the given character is lower case.
 * @c: character to test.
 *
 * Return: 1f letter is lowercase, 0 if not  
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		 return (1);
	}
	return (0);
}
