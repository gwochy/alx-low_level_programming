#include "main.h"

/**
 * cap_string - Capitalizes all words in the string
 *
 *@s: String whose 1st letters are capitalized
 * Return: Each word capitalized
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; ++i)
	{
		if (i == 0)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
		}
		else if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
				s[i - 1] == ',' || s[i - 1] ==  ';' || s[i - 1] == '.' ||
				s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
				s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
				s[i - 1] == '}')
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
		}
		else
			s[i] = s[i];
	}
	return (s);
}
