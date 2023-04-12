#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *eli;
	int dave, ram = 0;

	if (str == NULL)
		return (NULL);
	dave = 0;
	while (str[dave] != '\0')
		dave++;

	eli = malloc(sizeof(char) * (dave + 1));

	if (eli == NULL)
		return (NULL);

	for (ram = 0; str[ram]; ram++)
		eli[ram] = str[ram];

	return (eli);
}

