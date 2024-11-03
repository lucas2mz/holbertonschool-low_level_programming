include "main.h"
/**
 * rev_string - Entry of the program
 * rev_string - Print a rev of a string
 * @s: Var to be checked
 */
void rev_string(char *s)
{
	int length, i;
	char rev[500];

	length = 0;

	while (s[length] != '\0')
{
	length++;
}
	for (i = 0; i < length; i++)
	{
	rev[i] = s[length - 1 - i];
	}
	rev[length] = '\0';

	for (i = 0; i < length; i++)
	{
	s[i] = rev[i];
	}
	s[length] = '\0';
}
