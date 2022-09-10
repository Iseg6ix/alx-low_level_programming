#include <stdio.h>
/**
 * main- This program that prints all single digit numbers of base 10 starting from 0
 * Return: 0 if no errors occurred, else prints a positive integer.
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	printf("\n");
	return (0);
}
