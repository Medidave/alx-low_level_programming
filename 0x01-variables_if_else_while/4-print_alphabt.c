#include <stdio.h>

/**
 * main - The program prints alphabet in lowercase
 * Return: always 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i == 'q')
			putchar(i);
	putchar('\n');
	return (0);

}
