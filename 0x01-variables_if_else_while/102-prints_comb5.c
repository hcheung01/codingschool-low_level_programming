#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, d1, d2, d3, d4;

	for (n = 0; n <= 98; n++)
	{
		for (m = 0; m <= 99; m++)
		{
			d1 = n / 10;
			d2 = n % 10;
			putchar(d1 + '0');
			putchar(d2 + '0');
			putchar(' ');
			d3 = m / 10;
			d4 = m % 10;
			putchar(d3 + '0');
			putchar(d4 + '0');

			if (d1 + d2 != 17 || d3 + d4 != 18)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
