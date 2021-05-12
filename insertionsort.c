#include <stdio.h>

void insertion_sort(int *arr,int size) {
	int i, key, j;
	for(i = 1; i < size; i++) {
		key = arr[i];
		j = i - 1;

		while(j >= 0 && arr[j] > key) {
			arr[j+1] = arr[j];
			j--;
		}
		
		arr[j + 1] = key;
	}
} 

int main() {
	int arr[] = {1,3,2,5,4};
	int size = sizeof(arr)/sizeof(arr[0]);
	int i;
;
	
	if(size > 0) {
		insertion_sort(arr,size);
	}

	for(i = 0; i < size;i++) {
		printf("%d ", arr[i]);
	}

return 0;
}
