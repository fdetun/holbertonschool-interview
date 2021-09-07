#include "list.h"
/**
 * add_node_end - add node at the end
 * @list: the list to edit
 * @str: the node to add
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
	end = start->prev;
	new->next = start;
	new->prev = end;
	end->next = new;
	start->prev = new;

	return (new);

}

/**
 * add_node_begin - Add a new node to the beginning
 *
 * @list: A the list to edit
 * @str: Node content
 *
 * Return: list or NULL
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
	end = start->prev;
	new->next = start;
	new->prev = end;
	end->next = new;
	start->prev = new;
	*list = new;

	return (new);
}
