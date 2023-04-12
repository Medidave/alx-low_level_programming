#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *dave;
	int in, cin;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	in = cin = 0;
	while (s1[in] != '\0')
		in++;
	while (s2[cin] != '\0')
		cin++;

	dave = malloc(sizeof(char) * (in + cin + 1));

	if (dave == NULL)
		return (NULL);
	in = cin = 0;
	while (s1[in] != '\0')
	{
		dave[in] = s1[in];
		in++;
	}

	while (s2[cin] != '\0')
	{
		dave[in] = s2[cin];
		in++, cin++;
	}
	dave[in] = '\0';
	return (dave);
}




