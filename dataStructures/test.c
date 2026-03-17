#include <stdio.h>
#include "genJaggedArr.h"

DEFINE_JAGGEDARR(int, IntRow, IntMatrix)

int main(void){
	printf("Hello, Sassari\n");
	
	IntMatrix myMatrix;
	IntMatrix_init(&myMatrix);
	
	IntMatrix_push_at(&myMatrix, 0, 10);
	IntMatrix_push_at(&myMatrix, 0, 20);
	IntMatrix_push_at(&myMatrix, 0, 33);
	
	IntMatrix_push_at(&myMatrix, 2, 876);
	
	for(size_t i = 0; i < myMatrix.len; i++){
		printf("Riga %zu (lunghezza %zu): ", i, myMatrix.data[i].len);
		for(size_t j = 0; j < myMatrix.data[i].len; j++){
			printf("%d ", myMatrix.data[i].data[j]);
		}
		printf("\n");
	}
	
	IntMatrix_deep_free(&myMatrix);
	
	return 0;
}