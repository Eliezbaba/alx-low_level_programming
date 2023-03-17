#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print all possible different combinations of three digits'
 * Return: always 0
 */
int main(void)
{
	int x;
	int y;
	int z;

	while (z < 10)
	{
		y = 0;
		while (y < 0)
		{
			x = 0;
			while (x < 0)
			{
				if (x != y && y != z && z < y && y < x)
				{
					putchar('0' + z);
					putchar('0' + y);
					putchar('0' + x);

					if (x + y + z != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				x++;
			}
			y++;
		}
		z++;
	}
	putchar('\n');
	return (0);
}
