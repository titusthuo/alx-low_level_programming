#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * @s: A pointer to the memory area to be filled
 * @b: The character to fill memory area with
 * @n: Number of bytes to be filled
 * description _memset: over there
 *
 * Return: A pointer to the filled memory area s
 *
 */
void *_memset(void *s, int b, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
