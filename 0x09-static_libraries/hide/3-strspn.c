#include "main.h"
#include <stdio.h>
/**
 * _strspn - get the length of a prefix substring.
 * @s: the string.
 * @accept: the accepted bytes.
 *
 * Return: the number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count1, count2;

	count1 = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count1 = count2;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count2++;
				break;
			}
		}
		if (count1 == count2)
			break;
	}
	return (count2);
}
