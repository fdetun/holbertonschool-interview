#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

/**
* add_node_end - add_node_end.
* @list: list
* @str: str.
* Return: @ || NULL .
*/
List *add_node_end(List **list, char *str)
{
List *tmp = NULL;
List *start = NULL;
List *nouvellen = NULL;
char *nsAtr;

if (!list || *list == NULL)
{
tmp = (List *) malloc(sizeof(List));
if (!tmp)
return (NULL);
nsAtr = strdup(str);
if (!nsAtr)
return (NULL);
tmp->str = nsAtr;
tmp->prev = tmp;
tmp->next = tmp;
*list = tmp;
return (tmp);
}
tmp = *list;
start = *list;
while (tmp)
{
if (tmp->next == NULL || tmp->next == start)
break;
tmp = tmp->next;
}
nouvellen = (List *) malloc(sizeof(List));
if (!nouvellen)
return (NULL);
nsAtr = strdup(str);
if (!nsAtr)
return (NULL);
nouvellen->str = nsAtr;
nouvellen->prev = tmp;
nouvellen->next = start;
tmp->next = nouvellen;
start->prev = nouvellen;
return (nouvellen);
}

/**
* add_node_begin - Add node to the beginning of a double circular linked list.
* @list: the list to modify
* @str: the string to copy into the new node.
* Return: Address of the new node, or NULL on failure.
*/
List *add_node_begin(List **list, char *str)
{
List *nouvellen = NULL;
char *nsAtr;

if (!list || *list == NULL)
{
nouvellen = (List *) malloc(sizeof(List));
if (nouvellen == NULL)
return (NULL);
nsAtr = strdup(str);
if (!nsAtr)
return (NULL);
nouvellen->str = nsAtr;
nouvellen->prev = nouvellen;
nouvellen->next = nouvellen;
*list = nouvellen;
return (nouvellen);
}

nouvellen = (List *) malloc(sizeof(List));
if (!nouvellen)
return (NULL);
nsAtr = strdup(str);
if (!nsAtr)
return (NULL);
nouvellen->str = nsAtr;
nouvellen->next = (*list);
if ((*list)->prev == NULL && (*list)->next == NULL)
{
(*list)->prev = nouvellen;
(*list)->next = nouvellen;
nouvellen->prev = (*list);
}
else
{
nouvellen->prev = (*list)->prev;
(*list)->prev->next = nouvellen;
(*list)->prev = nouvellen;
}
*list = nouvellen;
return (nouvellen);
}
