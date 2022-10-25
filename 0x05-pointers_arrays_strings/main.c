#include "main.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("s1 - %s\n", s1);
	printf("ptr - %s\n", ptr);
	return (0);
}
