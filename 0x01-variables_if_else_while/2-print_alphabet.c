#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= alp; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
