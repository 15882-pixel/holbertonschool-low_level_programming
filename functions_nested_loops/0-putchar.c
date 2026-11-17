#include "main.h"

/**
 * main - Prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *word = "_putchar";

	while (*word)
		_putchar(*word++);
	_putchar('\n');
	return (0);
}
