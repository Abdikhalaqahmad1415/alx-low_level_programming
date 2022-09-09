#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 0n success
 */
int main(void)
{
	char letter = 'a';

	for (; letter <= 'z'; letter++)
	{
		putchar(letter);
		if (letter == 'z')
			putchar('\n');
	}
	return (0);
}
