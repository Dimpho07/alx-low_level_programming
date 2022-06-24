#include <stdio.h>
/**
 *Author: Aphiri Dimpho
 *File  : 0-whatsmyname.c
 * main - prints its name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[1]);
	return (0);
}
