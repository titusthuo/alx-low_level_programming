#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * @s: A pointer to the memory area to be filled
 * @b: The character to fill memory area with
 * @n: Number of bytes to be changed
 * description _memset: over there
 *
 * Return: A pointer to the filled memory area s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
