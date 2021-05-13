#include <stdio.h>

int main() {
	int i, n, min;
	printf("Enter size of array : ");
	scanf("%d", &n);
	
	int array[n];
	for(i = 0; i < n; i++) {
		printf("Enter %dst element  : ", i + 1);
		scanf("%d",&array[i]);
	
	}
	
	min = array[0];
	for(i = 0; i < n; i++) {
		if(array[i] < min) min = array[i];

	}
	
	printf("Minimum value of the array is  : %d ", min);

return 0;
}
