#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * except q and e followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char th;

	for (th = 'a'; th <= 'z'; th++)
	{
		if (th != 'e' && th != 'q')
			putchar(th);
	}
	putchar('\n');
	return (0);
}
