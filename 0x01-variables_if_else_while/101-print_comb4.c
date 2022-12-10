#include <stdio.h>

/**
 * main - Print combinatins of two digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (n = 48; n<= 56; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
