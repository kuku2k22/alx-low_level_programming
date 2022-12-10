#include <stdio.h>

/**
 * main - Print combinatins of two digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int n;
	int j;

	for (i = 48; i< 58; i++)
	{
		for (n = 48; n < 56; i++)
		{
			if (n > i)
			{
				for (j = 48; j < 58; j++)
				{
					if (j > n)
					{
					putchar(i);
					putchar(n);
					putchar(j);
					if (i == 55 && n == 56 && j == 67)
					{
						break;
					}
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
zsi}
