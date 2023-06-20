/*
 * File: 11-print_to_98.c
 * Auth: Muhereza Owen Kasule
 */

#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);

		if (n > 98)
			n--;
		else
			n++;
	}

	printf("%d\n", n);
}
