#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Main entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 99; x++)
	{
		for (y = x; y <= 99; y++)
		{
			if (y != x)
			{
				putchar(x / 10 + 48);

				putchar(x % 10 + 48);

				putchar(' ');

				putchar(y / 10 + 48);

				putchar(y % 10 + 48);
				if (x * 100 + y != 9899)
				{
					putchar(',');

					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
