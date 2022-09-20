#include "main.h"
/**
 * puts2 - This function every other character of a string,
 * starting with the first character.
 * @str: Pointer argument of the function.
 */
void puts2(char *str)
{
	int i = strlen(str);

	while (i+=2)
	{
		puts(str);
	}
}
