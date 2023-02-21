#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf ("%d is zero\n", n);
	}
	else
	{
		prinf("%d is negative\n", n);
	}
	return (0);
}
