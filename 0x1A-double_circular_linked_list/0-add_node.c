#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add node to the end
 * @list: list
 * @str: node to add
 * Return: list or NULL
 */

List *add_node_end(List **list, char *str)
{
List *new = NULL;

	new = malloc(sizeof(List));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	new->prev = NULL;

if (!(*list))
{
new->next = new;
new->prev = new;
*list = new;
}
	else
	{
		new->next = (*list);
		new->prev = (*list)->prev;
		(*list)->prev->next = new;
		(*list)->prev = new;
	}
	return (new);
}

/**
 * add_node_begin - add node at the begin of the list
 * @list: list
 * @str: node to add
 * Return: list or NULL
 */

List *add_node_begin(List **list, char *str)
{
List *new = NULL;

	new = malloc(sizeof(List));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	new->prev = NULL;

if (!(*list))
{
newn->next = new;
newn->prev = new;
*list = new;
}
	else
	{
		new->next = (*list);
		new->prev = (*list)->prev;
		(*list)->prev->next = new;
		(*list)->prev = new;
*list = new;
	}
	return (new);
}
