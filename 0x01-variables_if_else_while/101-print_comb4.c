#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int num, i, j;

	for (num = 0; num < 8; num++)
	{
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 10; j++)
			{
				putchar(num + '0');
				putchar(i + '0');
				putchar(j + '0');
				if (num == 7 && i == 8 && j == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
