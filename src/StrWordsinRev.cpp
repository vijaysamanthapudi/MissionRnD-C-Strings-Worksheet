/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void reverse(char* str, int len);
void str_words_in_rev(char *input, int len)
{
	
	int i = 0, j = 0;

	while (1) // Loop forever
	{
		if (*(input + j) == ' ' || *(input + j) == '\0')
		{
			reverse(input + i, j - i);
			i = j + 1;
		}
		if (*(input + j) == '\0')
		{
			break;
		}
		j++;
	}
	reverse(input, len);
	
}

void reverse(char* str, int len)
{
	int i, j;
	char temp;
	i = j = temp = 0;

	j = len - 1;
	for (i = 0; i<j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}
