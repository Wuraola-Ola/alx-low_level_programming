#include <stdio.h>
/**
 * main - entry point
 * Description: random number in n +ve/-ve
 * Return: 0 on success
 */
int main(void)
{
	int i, j;

	i = 48;
	j = 48;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
	{
			putcher(i);
			putchar(j);
			if (i < 56 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
	}
		i++
	}
	putchar(10);
	return (0);

}
