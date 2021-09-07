#include "list.h"
/**
 * add_node_end - add node to the end
 * @list: list
 * @str: node to add
 * Return: list or NULL
 */

List *add_node_end(List **list, char *str)
{
	List *new, *start, *end;

	if (!str)
	return (NULL);


	new = malloc(sizeof(List));
	if (!new)
	return (NULL);
	new->str = strdup(str);
	if (!new->str)
	return (NULL);

	if (!list || *list == NULL)
	{
		new->next = new;
		new->prev = new;
		*list = new;
		return (new);
	}

	start = *list;
	end = head->prev;
	new->next = start;
	new->prev = end;
	end->next = new;
	start->prev = new;

	return (new);

}

/**
 * add_node_begin - Print informations about each element of a list
 *
 * @list: A pointer to the head of the linkd list
 * @str: Node content to add
 *
 * Return: void
 */
List *add_node_begin(List **list, char *str)
{
	List *new, *start, *end;

	if (!str)
	return (NULL);


	new = malloc(sizeof(List));
	if (!new)
	return (NULL);
	new->str = strdup(str);
	if (!new->str)
	return (NULL);

	if (!list || !*list)
	{
		new->next = new;
		new->prev = new;
		*list = new;
		return (new);
	}

	start = *list;
	end = head->prev;
	new->next = start;
	new->prev = end;
	end->next = new;
	start->prev = new;
	*list = new;

	return (new);
}
