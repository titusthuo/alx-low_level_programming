#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and then in uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sh;

	for (sh = 'a'; sh <= 'z'; sh++)
		putchar(sh);
	for (sh = 'A'; sh <= 'Z'; sh++)
		putchar(sh);
	putchar('\n');
	return (0);
}
