#include <stdio.h>

int main() {
	int *arr, i, max, n;
	printf("Number of elements in an array : ");
	scanf("%d", &n);

	for(i = 0; i < n; i++) {                  // taking input for array
		printf("Enter element %d : ",i);   
		scanf("%d", &arr[i]);
	}

	max = arr[0];

	for(i = 0; i < n; i++) {
		if (max < arr[i]) max = arr[i];
	}

	printf("Max element of the array is : %d", max);

return 0;
}
