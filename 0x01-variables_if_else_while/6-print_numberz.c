#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print all single digit numbers of base 10'
 * Return: always 0
 */
int main(void)
{
	int t;

	for (t = 0; t <= 9; t++)
	{
		putchar(t + 48);
	}
	putchar('\n');
	return (0);
}
