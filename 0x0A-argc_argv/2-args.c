#include <stdio.h>
#include "main.h"
/**
 * main - This function prints out given parameters.
 * @argc: Integer argument.
 * @argv: Pointer to character.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv[i])
	}
	return (0);
}
