/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>
#include<string.h>
#include <malloc.h>
int check_spaces(char str[]);
int str_cmp(char str1[], char str2[]);
void str_cpy(char str1[], char str2[]);
#define SIZE 31

char ** commonWords(char *str1, char *str2) {
	if (str1 == NULL || str2 == NULL)
	{
		return NULL;
	}
	char **temp = (char **)malloc(sizeof(char) * 31);
	int i, j = 0, k1 = 0, k2 = 0, z = -1;
	char temp1[10][10], temp2[10][10];
	if (check_spaces(str1) == 1 || check_spaces(str2) == 1)
	{
		return NULL;
	}
	for (i = 0; str1[i]; i++)
	{
		if (str1[i] != ' ')
		{
			temp1[k1][j] = str1[i];
			j++;
		}
		else
		{
			temp1[k1][j] = '\0';
			k1++;
			j = 0;
		}

	}
	temp1[k1][j] = '\0';
	j = 0;
	for (i = 0; str2[i]; i++)
	{
		if (str2[i] != ' ')
		{
			temp2[k2][j] = str2[i];
			j++;
		}
		else
		{
			temp2[k2][j] = '\0';
			k2++;
			j = 0;
		}

	}
	temp2[k2][j] = '\0';

	for (i = 0; i <= k1; i++)
	{
		for (j = 0; j <= k2; j++)
		{
			if (str_cmp(temp1[i], temp2[j]) == 1)
			{
				z++;
				temp[z] = (char *)malloc(sizeof(char));
				str_cpy(temp[z], temp1[i]);
				
			}
		}
	}

	if (z==-1)
	{
		return NULL;
	}
	else
	{
		return temp;
	}

}

int check_spaces(char str[])
{
	int i, count=0,len=0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}
		len++;
	}
	if (count == len)
	{
		return 1;
	}

}

int str_cmp(char str1[], char str2[])
{
	int i;
	for (i = 0; str1[i]; i++)
	{
		if (str1[i] != str2[i])
		{
			return 0;
		}
	}
	return 1;
}

void str_cpy(char str1[], char str2[])
{
	int i;
	for ( i = 0; str2[i]; i++)
	{
		str1[i] = str2[i];
	}

	str1[i] = '\0';
}