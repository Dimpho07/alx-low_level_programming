#include "main.h"
/**
 *Author:  Aphiri Dimpho 
 *File  :  2-strlen.c
 * _strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}
