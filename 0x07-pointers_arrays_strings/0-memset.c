#include "main.h"
/**
 * _memset - fills memory with a constant byte n amount of times
 * @s: pointer that has the address of the memory to fill
 * @c: constant byte that will be written into the momory
 * @n: amount of times the byte will be written into the memory
 * Return: address of the memory where thebyte was written
 */
char *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
