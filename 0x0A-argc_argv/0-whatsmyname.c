#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments passed to the functio
 * @argv: argument vector of pointers to strings
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return 0;
}
