#include "lists.h"

/**
 * find_listint_loop - find_listint_loop
 * @head: head of linked list
 * Return: 0 or 1
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *a=head;
listint_t *b = head;
if (!head)
return (0);
while (a != b) {
a = a->next;
if (a == NULL)
return (NULL);
a = a->next;
if (a == NULL)
return (NULL);
b = b->next;
} 
a = head;
while (a != b)
{
b = b->next;
a = a->next;
}
return (a);
}