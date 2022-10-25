#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random password generator for 101-crackme
 * Return: always 0
 */
int main(void)
{
	int sum = 0;
	char randchar;

	srand(time(0));

	while (sum <= 2646)
	{
		randchar = rand() % 128;
		write(1, &randchar, 1);
		sum += randchar;
	}
	randchar = 2772 - sum;
	write(1, &randchar, 1);
	return (0);
}
