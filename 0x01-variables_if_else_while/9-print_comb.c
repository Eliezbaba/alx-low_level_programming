#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print all possible combinations of single-digit numbers'
 * Return: always 0
 */
int main(void)
{
	int k;

	for (k = 48; k <= 57; k++)
	{
		if (k == 57)
		{
			continue;
		}
		putchar(k);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
