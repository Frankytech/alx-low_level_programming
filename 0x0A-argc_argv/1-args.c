#include <stdio.h>
# include "main.h"

/*
 * main prints the number of arguments passed to it
 * @argv array arguments
 * returns 0 on succes
 */

/* function declaration */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
