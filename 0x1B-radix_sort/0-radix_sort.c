
#include "sort.h"

/**
 * radix_sort - radix_sortf
 * @array: array
 *
 * @size: size
 */
void radix_sort(int *array, size_t size)
{
size_t i;
long api = 1;
int *back, ok = INT_MIN;

if (size < 2 || !array)
return;

back = malloc(sizeof(int *) * size);
if (!back)
return;

for (i = 0; i < size; i++)
ok = array[i] > ok ? array[i] : ok;

while (ok / api > 0)
{
cd_sort(array, size, back, api);
print_array(array, size);
api *= 10;
}
free(back);
}

/**
 * newfunc - newfunc
 * @tab: tab
 * @n: n
 * @f: f
 * @api: api
 *
 * Return: sor
 */
int newfunc(int *tab, ssize_t n, int *f, long api)
{
int nt[10] = {0};
ssize_t i;

for (i = 0; i < n; i++)
nt[(tab[i] / api) % 10]++, f[i] = 0;
for (i = 1; i < 10; i++)
nt[i] += nt[i - 1];
for (i = n - 1; i >= 0; i--)
f[--nt[(tab[i] / api) % 10]] = tab[i];
for (i = 0; i < n; i++)
tab[i] = f[i];
return (0);
}
