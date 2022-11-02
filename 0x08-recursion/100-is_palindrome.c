#include "main.h"
/**
 * palind3 - compares string vs string reverse
 * @a: string
 * @l: length
 * Return: On success 1
 *  On error, -1 is returned, and errno is set appropriately
 */
int palind3(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind3(a + 1, l - 2));
}
