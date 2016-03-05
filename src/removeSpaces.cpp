/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str)
{
	int i, j = 0;
	if (str == '\0')
	{
		return '\0';
	}
	else
	{
		for (i = 0; str[i]; i++)
		{
			if (str[i] == ' ')
			{

			}
			else
			{
					str[j] = str[i];
					j++;
			}
		}
		str[j] = '\0';
	}
	return true;
}