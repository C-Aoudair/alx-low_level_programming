#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *strrev(char *str);
int to_int(char c);
char *mul_1(char *colon, char num, int len, int tr);
int main(int __attribute__((unused)) argc, char **argv)
{
	char *input_1;
	char input_2;
	char *output;
	int len;

	input_1 = strrev(argv[1]);
	input_2 = argv[2][0];
	len = strlen(input_1);
	output = mul_1(input_1, input_2, len, 0);
	printf("%s\n", strrev(output));
	return 0;
}




int to_int(char c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == '0' + i)
			break;
	}
	return (i);
}
char *mul_1(char *colon, char num, int len, int tr)
{
	int i;
	char *res;
	int r, m, c;

	res = malloc((len + tr + 1) * sizeof(char));
	for (i = 0; i < tr; i++)
		res[i] = '0';
	c = 0;
	for (i = 0; i < len; i++)
	{
		r = to_int(colon[i]) * to_int(num) + c;
		m = r % 10;
		c = r / 10;
		res[tr + i] = ('0' + m);
	}
	res[tr + i] = ('0' + c);
	return (res);
}
char *strrev(char *str)
{
	int i, j;
	char *res;

	j = strlen(str);
	res = malloc(j + 1);
	for (i = 0; i < j; i++)
		res[i] = str[j - i - 1];
	res[i] = '\0';
	return (res);
}

