#include <unistd.h>
/*
 * _putchar prints number of arguments to standard out 
 * @c: characters to print 
 * return on succes 1
 * on error return -1
 */

int _putchar(char c);
{
return (write(1, &c, 1));
}

