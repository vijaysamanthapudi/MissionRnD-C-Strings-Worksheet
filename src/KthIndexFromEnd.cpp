/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) 
{
	int i = 0, j = 0;
	if (str == '\0' || K < 0)
	{
		return '\0';
	}
	else
	{

		while (K)
		{
			if (K && str[j] != '\0')
			{
				K--;
				j++;						// Travsersal used in linked list to find k th node from last
			}								// O(n) complexcity in finding kth letter from last
			else
				return '\0';

		}

		for (; str[j] != '\0'; j++)
		{
			i++;
		}

	}
	return str[i - 1];
}