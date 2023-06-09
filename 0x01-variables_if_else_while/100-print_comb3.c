#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print all possible different combinations of two digits'
 * Return: always 0
 */
int main(void)
{
	int x;
	int y = 0;

	while (y < 10)
	{
		x = 0;
		while (x < 0)
		{
			if (y != x && y < x)
			{
				putchar('0' + y);
				putchar('0' + x);

				if (x + y != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			x++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}
