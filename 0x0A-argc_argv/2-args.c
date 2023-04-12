#include <stdio.h>
#include "main.h"

/**
 * main - a programe that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int dave_eli;

	for (dave_eli = 0; dave_eli < argc; dave_eli++)
	{
		printf("%s\n", argv[dave_eli]);
	}

	return (0);
}
