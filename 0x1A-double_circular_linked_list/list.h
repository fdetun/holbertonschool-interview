#ifndef __LISTS__
#define __LISTS__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct List - doubly linked list
 * @str: strr
 * @prev: prev
 * @next: next
 *
 * Description: Description of structList
 */
typedef struct List
{
char *str;
struct List *prev;
struct List *next;
} List;

List *add_node_end(List **list, char *str);
List *add_node_begin(List **list, char *str);

#endif
