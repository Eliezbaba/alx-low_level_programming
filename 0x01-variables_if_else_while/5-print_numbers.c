#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print all single digit numbers of base 10'
 * Return: always 0
 */
int main(void)
{
	int w;

	for (w = 0; w <= 9; w++)
	{
		printf("%d", w);
	}
	printf("\n");
	return (0);
}
