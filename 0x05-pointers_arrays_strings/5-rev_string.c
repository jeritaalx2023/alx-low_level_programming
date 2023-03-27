#include "main.h"
#include <stdio.h>
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */

void rev_string(char *s)
{
	int count = 0, i = 0;
	char last_c;

	while	(*s)
	{
		s++;
		count++;
	}
	for	(i = 0; i < count; i++)
	{
		s--;
	}
	for	(i = 0; i < (count / 2); i++)
	{
		int last = count - 1;

		last_c = s[last - i];
		s[last - i] = s[i];
		s[i] = last_c;

	}
}
