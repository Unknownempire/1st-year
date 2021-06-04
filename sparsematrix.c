#include <stdio.h>

int main() {
	int i, j, k = 0, size = 0;
	int sparsematrix[4][5] = {{0,0,0,0,0},{4,0,5,1,0},{0,2,2,0,0},{0,6,8,0,3}};
	
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 5; j++) {
			if(sparsematrix[i][j] != 0)
				size++;

		}
	}

	int compactmatrix[3][size];

	for(i = 0; i < 4; i++) {
		for(j = 0; j < 5; j++) {
			if(sparsematrix[i][j] != 0) {
				compactmatrix[0][k] = i;
				compactmatrix[1][k] = j;
				compactmatrix[2][k] = sparsematrix[i][j];
				k++;

			}

		}
	}

	printf("Compact Matrix is : ");
	printf("\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < size; j++) {
			printf("%d ", compactmatrix[i][j]);
		}
		printf("\n");
	}
return 0;
}
