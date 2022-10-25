#include "main.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "My string";
	printf("%s\n", str);
	rev_string(str);
	printf("%s\n", str);
	return (0);
}
