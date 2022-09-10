#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks the random value of n and prints out if it's 
 * positive, negative or zero.
 *
 * Return: Returns 0 if no errors encoutered, else return integer
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
