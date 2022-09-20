#include <stdio.h>
/**
 * _puts - This function prints a string, followed by a new line, to stdout.
 * @str - Pointer argument of the function.
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	puts(str);
	getch();
	puts("\n");
	getch();
}
