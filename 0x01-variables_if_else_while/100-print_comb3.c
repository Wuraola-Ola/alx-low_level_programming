#include <stdio.h>

/**
 * main - entry point
 * Description: print possible combination of two numbers
 * Return: 0 on success
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		i = 48;
		while (i  < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (e != i && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;

		}
		e++;
	}
	putchar('/n');
	return (0);
}
