#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * prints a struct dog.
 * @d: the struct to be printed
 */

void print_dog(struct dog *d)
{  
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else 
		printf("Name: %s\n", d->name);
	if (d->age <0)
		printf("Age: (nil)\n");
	else
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		print("owner: (nil)\n");
	else 
		printf("owner:%S\n",d->owner);


}
