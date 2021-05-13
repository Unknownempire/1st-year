#include <stdio.h>

int main() {
	
	int i, n, max;
	printf("Enter number of elements in an array :  ");
	scanf("%d", &n);

	int arr[n];	

	for(i = 0; i < n; i++) {
		printf("Enter element %d : ", i);
		scanf("%d",&arr[i]);
	}

	max = arr[0];
	
	for(i = 0; i < n; i++) {
		if(max < arr[i]) max = arr[i];
	}j

	printf("The max element of the array is : %d", max);
	
	int max2 = arr[0];
	for(i = 0; i < n; i++) {
		if(arr[i] > max2 && arr[i] < max) {
			max2 = arr[i];
		}
	}
	printf("\nThe second max element if the array is : %d", max2);
	return 0;
}

