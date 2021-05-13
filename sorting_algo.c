#include <stdio.h>
// selection sort
void selectionsort(int* arr, int n) {
	int i, j, indexofmin;
	for(i = 0; i < n - 1; i++) {
		indexofmin = i;
		for(j = i + 1; j < n; j++) {
			if(arr[j] < arr[indexofmin])
				indexofmin = j;
		}
		int temp = arr[i];
		arr[i] = arr[indexofmin];
		arr[indexofmin] = temp;

	}

}
//insertion sort

void insertionsort(int* arr, int n) {
	int i, hole;
	for(i = 1; i < n; i++) {
		int value = arr[i];
		hole = i;

		while(hole > 0 && arr[hole - 1] > value) {
			arr[hole] = arr[hole - 1];
			hole--;
		}
		arr[hole] = value;
	}
}
//print

void print(int* arr, int size) {
	int i;
	for(i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}
// merge sort

void merge(int* L, int* R, int* A, int n) {
	int i = 0, j = 0, k = 0; 
	int mid = n/2;
	int nL = mid;
	int nR = n - mid;
	while(i < nL && j < nR) {
		if(L[i] <= R[j]) {
			A[k] = L[i];
			i++;
		}
		else {
			A[k] = R[j];
			j++;
		}
		k++;
	}
	while(i < nL) {
		A[k] = L[i];
		i++;
		k++;

	}
	while(j < nR) {
		A[k] = R[j];
		j++;
		k++;
	}
}

void mergesort(int* A, int n) {
	int i;
	if(n < 2)
		return ;
	int mid = n/2;
	int L[mid];
	int R[n - mid];
	for(i = 0; i < mid; i++) 
		L[i] = A[i]; 
	for(i = mid; i < n; i++)
		R[i - mid] = A[i];
	mergesort(L, mid);
	mergesort(R, n - mid);
	printf("L: ");
	print(L,mid);
	printf("\n");
	printf("R: ");
	print(R,n - mid);
	printf("\n");
	printf("A: ");
	print(A, n);
	printf("\n");
	merge(L, R, A,n);
	printf("After merge A: ");
	print(A, n);
	printf("\n");
}
void swap(int *a, int *b) {
	int *temp = b;
	b = a;
	a = temp;
}
//quick sort
int partition(int* A, int start, int end) {
	int pivot = A[end];
	int pindex = start;
	int i;
	//printf("%d\n", end);
	//printf("%d", pindex);

	for(i = 0; i < end; i++) {
		if(A[i] <= pivot) {
			swap(&A[i], &A[pindex]);
			pindex++;

		}

	}
	swap(&A[pindex], &pivot);
	//printf("%d\n ", pivot);
	return pindex;
}

void quicksort(int *A, int start, int end) {
	int pindex;
	if(start < end) {
		pindex = partition(A, start, end);
	}
	//printf("%d\n ", pindex);
	quicksort(A, start, pindex - 1);
	printf("L :");
	print(A, pindex - 1);
	printf("\n");
	quicksort(A, pindex + 1, end);
	printf("L :");
	print(A, end - pindex - 1);

}

int main() {
	int *arr;
	int size;
	int i;
	printf("Enter number of elements: ");
	scanf("%d", &size);

	for(i = 0; i < size; i++) {
		printf("Enter element %d: ", i);
		scanf("%d", &arr[i]);
	}
	//selectionsort(arr, size);
	//insertionsort(arr, size);
	//mergesort(arr,size);
	quicksort(arr, 0, size);
	//print(arr, size);
	

	return 0;
}
