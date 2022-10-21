#ifndef LIST_H
#define  LIST_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str - malloced'd string
 * @len lenght of string
 * @next: points to the next node
 *
 * description: all prototypes used in the singly linked directory
 * are contained her and is part of neccesities for a succesfull program compilation
 */
typede struct list_S
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif

