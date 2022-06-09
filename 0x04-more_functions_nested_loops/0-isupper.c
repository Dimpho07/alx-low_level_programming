#include "main.h"
#include <stdio.h>

/**
 * main - write a function that checks for uppercase character
 * Return 1 if uppercase
 * Return 0 if not uppercase
 * int isupper(character)
 */

int main(void)
{
	char str = 'c';
	if (_isupper(str) == 0)
	{
		printf("Not uppercase");
	}
	else
	{
		printf("uppercase");
	}

	return (0);
}
