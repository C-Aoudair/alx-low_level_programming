#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - An entry point
 *
 * Return: When 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("n is positive");
	else if (n == 0)
		printf("n is zero");
	else
		printf("n is negative");
	return (0);
}
