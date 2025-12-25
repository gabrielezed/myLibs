#ifndef DYNARR_H
#define DYNARR_H

#include <stdlib.h>

/* Dynamic Array Struct */
typedef struct dynArr{
	int *data;
	size_t size;
	size_t len;
}dynArr;

/* Function Prototypes */

void arrayInit(dynArr *arr);

void arrayPush(dynArr *arr, int d);

void arrayFree(dynArr *arr);

#endif
