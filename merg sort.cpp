#include <stdio.h>
void quicksort(int a[], int low, int high);
int partition(int a[], int low, int high);
int main() {
    int a[] = {5, 1, 8, 2}, n = 4, i;
    printf("Original Array: 5 1 8 2\n");
    quicksort(a, 0, n - 1);
    printf("Array after applying Quick Sort: ");
    for (i = 0; i < n; i++)
	 printf("%d ", a[i]);
    printf("\n");
    return 0;
}
void quicksort(int a[], int low, int high) {
    if (low < high) {
        int j = partition(a, low, high);
        quicksort(a, low, j - 1);
        quicksort(a, j + 1, high);
    }
}
int partition(int a[], int low, int high) {
    int pivot = a[low], i = low + 1, j = high, temp;
    while (i <= j) {
        while (i <= high && a[i] <= pivot) i++;
        while (a[j] > pivot) j--;
        if (i < j) { temp = a[i]; a[i] = a[j]; a[j] = temp; }
    }
    temp = a[low]; 
	a[low] = a[j]; 
	a[j] = temp;
    return j;
}

