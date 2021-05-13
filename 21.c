#include <stdio.h>

int main() {
	int i, size, min , max, count_max = 0, count_min = 0;
	printf("Enter size of the array : ");
	scanf("%d", &size);

	int array[size];
	for(i = 0; i < size; i++) {
		printf("Enter %dst element : ", i + 1);
		scanf("%d", &array[i]);
	}
	printf("\n");

	max = array[0];
	min = array[0];

	for(i = 0; i < size; i++) {
		if(array[i] > max) max = array[i];

		if(array[i] < min) min = array[i];
	
	}

	for(i = 0; i < size; i++) {
		if(array[i] == max) count_max++;

		if(array[i] == min) count_min++;

	}
	
	printf("Maximum value of array is : %d\n", max);
	printf("Minimum value of array is : %d\n", min);

	printf("Number of times maximum value occurs is : %d\nNumber of times minimum value occurs is %d ", count_max, count_min);

return 0;
}
