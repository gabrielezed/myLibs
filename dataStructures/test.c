#include <stdio.h>
#include "genDynArr.h"

DEFINE_DYNARR(double, DoubleArr)

int main(void){
	DoubleArr test;
	DoubleArr_init(&test);
	DoubleArr_push(&test, 440);
	printf("Stored value is: %f", test.data[0]);
	DoubleArr_free(&test);
	
	return 0;
}