#include "main.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "My string";
	printf(str);
	rev_string(str);
	printf(str);
	return (0);
}
