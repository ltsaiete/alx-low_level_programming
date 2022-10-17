#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Print a text using puts'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int n1;
	int n2;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					n1 = i * 10 + j;
					n2 = k * 10 + l;
					if (n1 < n2)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
					}
					if (n1 < 98 && n1 < n2)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
