#include "main.h"
/**
 * puts2 - function that prints every other character of a string,
 *  starting with the first character, followed by a new line.
 *  @str: input
 *  Return: Always 0
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\n')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	putchar('\n');
}
