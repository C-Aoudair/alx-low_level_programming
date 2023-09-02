#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min number of coins to make change for an amount of $.
 * @argc: Known.
 * @argv: Known.
 *
 * Return: 0 or 1.
 */
int main(int argc, char *argv[])
{
	int coins, money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
		printf("0\n");
	else
	{
		coins = (money / 25) + ((money % 25) / 10);
		coins = coins + (((money % 25) % 10) / 5);
		coins = coins + ((((money % 25) % 10) % 5) / 2);
		coins = coins + (((((money % 25) % 10) % 5) % 2) / 1);
		printf("%i\n", coins);
	}
	return (0);
}
