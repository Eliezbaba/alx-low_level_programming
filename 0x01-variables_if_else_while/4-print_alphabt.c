#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabet in lowercase, followed by a new line'
 * Return: always 0
 */
int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		if (x == 101 || x == 113)
		{
			x++;
			continue;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
