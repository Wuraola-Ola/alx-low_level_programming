#include <stdio.h>

/**
 * main - entry point
 * Description: print possible combination of two numbers
 * Return: 0 on success
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 57 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('/n');
	return (0);
}
