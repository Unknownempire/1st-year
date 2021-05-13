#include <stdio.h>

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}

void bubblesort(int arr[], int n) {
	int i, j, change;
	for(j = 0; j < n - 1; j++) {
	    change = 0;
	    for(i = 0; i < n - j - 1; i++) {
	        if(arr[i] > arr[i + 1]) {
		    swap(&arr[i], &arr[i + 1]);
		    change++;

		}    
 	    }
	    if(change == 0) break;
	        	

	}
	for(i = 0; i < n; i++) {
	    printf("%d  ", arr[i]);

	}
}
int main() {
	int *arr;
	int k, size;
	printf("Enter size of array = ");
	scanf("%d", &size);
	
	for(k = 0; k < size; k++) {

	    printf("Enter value %d = ", k);
	    scanf("%d", &arr[k]);	
	}

	                                        //int size = sizeof(arr)/sizeof(arr[0]);
                                                //for fixed array  
	bubblesort(arr, size);
	
	

	return 0;
}
