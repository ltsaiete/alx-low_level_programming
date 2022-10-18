#include <unistd.h>

/**
 * main - Entry point
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		write(1, c, 1);
	}
	write(1, "\n", 1);
	return (0);
}
