#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
* secondfunc - Sort array A[] using array B[].
*
* @backup: backup
* @f: f.
* @d: d.
* @dt: last.
* @tab: tab.
*/
void secondfunc(int *backup, int f, int d, int dt, int *tab)
{
int inc;
int a = f;
int b = d;

for (inc = f; inc < dt; inc++)
{
if (a < d && (b >= dt || (backup[a] <= backup[b])))
{
tab[inc] = backup[inc];
a += 1;
}
else
{
tab[inc] = backup[b];
b += 1;
}
}
for (inc = f; inc < dt; inc++)
{
backup[inc] = tab[inc];
}
}
/**
* fdefunc - fdefunc.
*
* @tab: tab.
* @a: a index to recursively go through the array (inclusive).
* @b: b index to recursively go through the array (exclussive).
* @backup: the array to sort using the array B.
*/
void fdefunc(int *tab, int a, int b, int *backup)
{
int f, i;

if (b - a <= 1)
return;
f = (a + b) / 2;
fdefunc(tab, a, f, backup);
fdefunc(tab, f, b, backup);

printf("Merging...\n");
printf("[left]: ");
for (i = a; i < f; i++)
{
printf("%d", backup[i]);
if (i + 1 < f)
printf(", ");
}
printf("\n");
printf("[right]: ");
for (i = f; i < b; i++)
{
printf("%d", backup[i]);
if (i + 1 < b)
printf(", ");
}
printf("\n");

secondfunc(tab, a, f, b, backup);

printf("[Done]: ");
for (i = a; i < b; i++)
{
printf("%d", backup[i]);
if (i + 1 < b)
printf(", ");
}
printf("\n");
}

/**
* merge_sort - merge_sort.
*
* @array: array.
* @size: size.
*/
void merge_sort(int *array, size_t size)
{
int d, i, *point;

if (size <= 1)
return;
d = size;
point = (int *) malloc(size * sizeof(int));
for (i = 0; i < d; i++)
point[i] = array[i];
fdefunc(point, 0, d, array);
free(point);
}
