#include <stdio.h>
#include <stdlib.h>

/* Init */
void arrayInit(dynArr *arr){
	arr->data = NULL;
	arr->size = 0;
	arr->len = 0;
}


/* Push */
void arrayPush(dynArr *arr, int d){
	size_t newSize;
	if(arr->size == arr->len){
		if(arr->len == 0){
			newSize = 2;
		}else{
			newSize = arr->size * 2;
		}
	
		int *newData = (int*)realloc(arr->data, newSize * sizeof(int));
		
		if(newData == NULL){
			fprintf(stderr, "Error: No memory left");
			return;
		}
		
		arr->data = newData;
		arr->size = newSize;
	}
	
	arr->data[arr->len] = d;
	arr->len++;
}

/* Free */
void arrayFree(dynArr *arr){
	free(arr->data);
	arr->data = NULL;
        arr->size = 0;
        arr->len = 0;
}

