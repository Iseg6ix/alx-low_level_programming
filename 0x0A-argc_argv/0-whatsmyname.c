#include "main.h"
/**
 * main - This function returns the name of the compiled file.
 * @argc: Count of the number of arguments entering the function.
 * @argv: Array of the arguments entering the function.
 *
 * Return: 0 On success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv[0]);
	return (0);
}
