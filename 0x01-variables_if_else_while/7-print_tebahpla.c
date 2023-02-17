#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char th;

	for (th = 'z'; th >= 'a'; th--)
	{
		putchar(th);
	}
	putchar('\n');
	return (0);
}
