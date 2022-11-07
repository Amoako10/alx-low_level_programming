#include <unistd.h>
/**
 * _putchar - writes the charachter < to stdout 
 * @c: The character to print 
 * Return: ON success 1
 * On error, -1 i> returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
