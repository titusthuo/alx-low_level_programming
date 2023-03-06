#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to be located
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int t;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		t = 0;

		if (haystack[t] == needle[t])
		{
			do {
				if (needle[t + 1] == '\0')
					return (haystack);

				t++;

			} while (haystack[t] == needle[t]);
		}

		haystack++;
	}

	return ('\0');
}
