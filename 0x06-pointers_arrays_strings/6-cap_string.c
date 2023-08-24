#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string.
 * @s: the string.
 *
 * Return: the string after been capitalized.
 */
char *cap_string(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == ' ' || s[i] == '	' || s[i] == ',' || s[i] == '(' || s[i] == ')' || s[i] == '{')
{
i++;
if (s[i] >= 'a' && s[i] <= 'z' && s[i] != '\0')
s[i] = s[i] - 32;
else
i--;
}
else if (s[i] == '\n' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '}')
{
i++;
if (s[i] >= 'a' && s[i] <= 'z' && s[i] != '\0')
s[i] = s[i] - 32;
else
i--;
}
}
return (s);
}
