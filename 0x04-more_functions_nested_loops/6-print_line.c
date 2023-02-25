#include "main.h"

/**
 * print_line - draws a straight linei n the terminal
 * @n: number of times the character - should be printed
 * Return empty
 */

void print_line(int n)

{
	int x;
	
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}	
