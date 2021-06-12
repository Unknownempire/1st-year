#include <stdio.h>

int main() {
	int i, r1, r2, num;
	printf("Enter number of elements : ");
	scanf("%d", &num);
	printf("Enter min and max range of the array : ");
	scanf("%d%d", &r1, &r2);
	int arr[num];
	for(i = 0; i < num; i++) {
		printf("Enter element %d : ", i + 1);
		scanf("%d", &arr[i]);
		while(arr[i] < r1 || arr[i] > r2) {
			printf("Element not in range\nEnter element %d again : ", i + 1);
			scanf("%d ", &arr[i]);

		}
	}
	printf("Array is : ");
	for(i = 0; i < num; i++) {
		printf("%d", arr[i]);
	}
	return 0;
}


