#include <stdio.h>
#include <stdlib.h>

/*
 * main tskes two arguments and multiples them toghether
 * main prints an eroor message when given less than  or more than 2 arguments
 * @argc number of arguments
 * @ argv array of arguments
 *
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = ato1(argv[2]);
		res = num1 * num2;
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("error\n");
		return (1);
	}
return (0);
}
