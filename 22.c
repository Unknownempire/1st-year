#include <stdio.h>

void remove_duplicate(int arr[],int size) {
	int i, j = 0;

	for(i = 0; i < size-1; i++) {
		if(arr[i] != arr[i+1]) {
			arr[j] = arr[i];
			j++;

		}

	}
	arr[j++] = arr[size-1];

	for(i = 0; i < j; i++) {
		printf(" %d ", arr[i]);
	}

}

int main() {
	int arr[] = {1,3,3,6,7,8};
	int size = sizeof(arr)/sizeof(arr[0]);
	if(size > 1){
		remove_duplicate(arr,size);
	}

return 0;
}
