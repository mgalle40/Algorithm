#include <iostream>
#include "QuickSort.h"
int main()
{
	int arr[] = { 100,0,80,51,9,66 };
	int n = sizeof(arr) / sizeof(arr[0]);
	quicksort(arr, 0, n - 1);
	std::cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}

