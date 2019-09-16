#include "QuickSort.h"
#include <iostream>

void swap(int* a, int* b) {
	int t = 0;
	t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int low, int high) {
	int pivot = 0;
	int i = 0;
	pivot = arr[high];
	i = (low - 1);
	for (int x = low; x <= high - 1; x++) {
		if (arr[x] < pivot) {
			i++;
			swap(&arr[i], &arr[x]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return(i + 1);
}

void quicksort(int arr[], int low, int high) {
	if (low < high) {
		int x = 0;
		x = partition(arr, low, high);
		quicksort(arr, low, x - 1);
		quicksort(arr, x + 1, high);
	}
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}