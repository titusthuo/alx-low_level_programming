#include "main.h"

/**
 * str_concat - gets ends of input and adds together the size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: 1
 */

int _strlen(char *s)
{
unsigned int i;

i = 0;

while (s1[i] != '\0')
{
   i++;
}
return i;
}

/**
 * str_concat - back a pointer to array
 * @s1: Array one
 * @s2: Array two
 * Return: Always an array dynamic
 */

char *str_concat(char *s1, char *s2)
{
char *concat

unsigned int i, j, size;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

size = (_strlen(s1) + _strlen(s2) + 1);

concat = (char *) malloc(size * sizeof(char));

if (concat = 0)
{
return (NULL);
}


for (i = 0; *(s1 + i) != '\0'; i++)
	*(concat + i) = *(s1 + i);
	
for (j = 0; *(s2 + j) != '\0'; j++)
{
	*(concat + i) = *(s2 + j);
	i++;
}
return (concat);
}
