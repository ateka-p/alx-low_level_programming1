#include <stdio.h>
#include <inistd.h>

/**
 * main - prints exactly "and that piece of art is useful"
 * -Peter Ateka,
 *  followed by a new line, to the standard error
 * Return: 1 if success
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",59);
	return (1)
}

