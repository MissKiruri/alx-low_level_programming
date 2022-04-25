/**
* File: 0-print_list.c
*
*/
#include "lists.h"
#include <stdio.h>
/**
* print_list - Prints all the elements of a list_t list.
* @h: The list_t list.
*
* Return: The number of nodes in h.
*/
size_t print_list(const list_t *h)
{
unsigned int nodes = 0;
while (h)
{
printf("[%u] ", h->len);
if (h->str == NULL)
printf("(nil)\n");
else
printf("%s\n", h->str);
h = h->next;
nodes++;
}
return (nodes);
}
