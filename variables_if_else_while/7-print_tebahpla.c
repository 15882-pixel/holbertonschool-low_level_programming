#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

		for (letter = 'z'; letter >= 'a'; letter--)
			putchar(letter);
	putchar('\n');
	return (0);
}
