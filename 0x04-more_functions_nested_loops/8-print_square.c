#include "main.h"

/**
 * print_square - prints a square of '#' characters in the terminal
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
