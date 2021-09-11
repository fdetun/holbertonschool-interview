#ifndef __SORT__
#define __SORT__

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

void radix_sort(int *array, size_t size);
int newfunc(int *array, ssize_t size, int *temp, long exponent);
void print_array(const int *array, size_t size);

#endif
