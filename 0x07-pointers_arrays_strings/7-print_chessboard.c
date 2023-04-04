#include "main.h"
/**
 * print_chessboard -  function that prints the chessboard.
 * @a: array
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int awitor;
	int jamel;

	for (awitor = 0; awitor < 8; awitor++)
	{
		for (jamel = 0; jamel < 8; jamel++)
			_putchar(a[awitor][jamel]);
		_putchar('\n');
	}
}

