/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
void str_rev(char str[]);
void number_to_str(float number, char *str,int afterdecimal)
{

	int i, j = 0, temp, num,flag=0;
	if (number < 0)
	{
		flag = 1;
		number = -1 * number;
	}
	for (i = 0; i < afterdecimal; i++)
	{
		number *= 10;
	}
	num = (int)number;
	for (i = 0; num; i++)
	{
		if (i == afterdecimal)
		{
			str[j] = '.';
			j++;
		}
		else
		{
			temp = (int)num % 10;
			str[j] = temp + '0';
			j++;
			num = num / 10;
		}

	}
	if (flag == 1)
	{
		str[j] = '-';
		j++;
	}
	str[j] = '\0';
	str_rev(str);



}

void str_rev(char str[])
{
	int i, len;
	for (len = 0; str[len]; len++);
	len--;
	for (i = 0; i < len; i++, len--)
	{
		char ch = str[i];
		str[i] = str[len];
		str[len] = ch;

	}
}
