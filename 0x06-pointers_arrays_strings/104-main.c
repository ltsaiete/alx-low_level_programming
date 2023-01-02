#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{

	char buffer[] = "Talk\nis\t\tcheap.\x20 \1Sho\2w\3 me\4 \5the\6 code.";

	printf("%s\n", buffer);
	printf("---------------------------------\n");
	print_buffer(buffer, sizeof(buffer));
	return (0);
}
