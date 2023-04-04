#include "main.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *emma = haystack;
		char *pat = needle;

		while (*emma == *pat && *pat != '\0')
		{
			emma++;
			pat++;
		}

		if (*pat == '\0')
			return (haystack);
	}
	return (0);
}

