#include <unistd.h>

/**
 * main - Entry point
 * Description: 'Print a text using write'
 * Return: Always 0 (Success)
 */

int main(void)
{
	write(1, "_putchar", 8);
	return (0);
}
