#include <stdio.h>

/**
 * main prints all members of base 16 in lower case ,
 * followed by new line 
 * return: always 0 (success)
 **/

int main(void)
{
	int n;
	int char;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}	
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
