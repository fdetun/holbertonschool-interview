#include "lists.h"

/**
 * is_palindrome - is_palindrome
 * @head: head
 * Return: 1 or 0
 */
int is_palindrome(listint_t **head)
{
int i = 0;
int j, s = 0;
listint_t *t[3000], *vartmp;

if (head == NULL)
return (0);
if (!(*head) || !(*head)->next)
return (1);
while (i < 3000)
{
t[i] = NULL;
i++;
}
vartmp = *head;
while (vartmp)
{
t[s] = vartmp;
s = s + 1;
vartmp = vartmp->next;
}
j = s / 2;
for (i = 0; i < j; i++)
{
if (t[i]->n != t[s - 1 - i]->n)
{
return (0);
}
}
return (1);
}
