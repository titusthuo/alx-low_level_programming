#include "main.h"
#include <stdlib.h>

/**
 * str_concat - gets ends of input and adds together the size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat
		int i, ch;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ch = 0;

	while (s1[i] != '\0')

		i++;
	while (s2[ch] != '\0')
		ch++;

	concat = malloc(sizeof(char) * (i + ch + 1));

	if (concat == NULL)
		return (NULL);

	i = ch = 0;

	while (s1[i] != '\0')
	{
		concat[i] = s1[i];

		i++;

	}

	while (s2[ch] != '\0')
	{
		concat[i] = s2[i];
		i++, ch++;
	}
	concat[i] = '\0';

	return (concat);
}
