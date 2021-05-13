#include <stdio.h>

void selection_sort(int *arr,int size) {
	int i, j, indexofmin, temp;
	for(i = 0; i < size - 1; i++) {
		indexofmin = i;
		for(j = i+1; j < size; j++) {
			if(arr[j] < arr[indexofmin]) {
				indexofmin = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[indexofmin];
		arr[indexofmin]  = temp;
		
	}
}

int main() {
	int i;
	int arr[] = {1,5,2,3,7};
	int size = sizeof(arr)/sizeof(arr[0]);

	if(size > 1) {
		selection_sort(arr,size);
	}
	for(i = 0; i < size; i++) {
		printf(" %d ", arr[i]);
	}

return 0;
}
