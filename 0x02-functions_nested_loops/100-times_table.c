#include "main"
/**
 * print_thousand - print out the digit in the thousand spot
 * @sum: Value to scan for thousand spot
 *
 * Return: Void
 */
static void print_thousand(int sum)
{
	if (sum / 1000 == 0)
	{
		_putchar(32);
	}
	else
	{
		_putchar('0' + (sum / 1000));
	}
}
