#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 */
void print_numbers(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		x = i < 10 ? (i + '0') : '\n';
		_putchar(x);
	}
}
