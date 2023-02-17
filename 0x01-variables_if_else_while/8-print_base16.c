#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z;
	char th;

	for (z = 48; z < 58; z++)
	{
		putchar(z);
	}
	for (th = 'a'; th <= 'f'; th++)
	{
		putchar(th);
	}
	putchar('\n');
	return (0);
}
