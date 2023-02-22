#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - main block
 *
 * Description : get a random number and print the number
 *
 * and if it is positive, negative or zero
 *
 * Return: Always 0 (success)
 */
int main(void)	
{	
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf(" % d is positive\0\n", n);
	else  if (n == 0)
	        printf(" % d is zero\0\n", n);	
	else	
	        printf(" % d is negative\0\n", n);
}	return (0);	
