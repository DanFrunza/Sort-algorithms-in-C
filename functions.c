#include "functions.h"
#include <stdio.h>

void copyArray(int array1[], int array2[], int size)
{
	for(int i =0; i<size; i++)
	{
		array2[i]=array1[i];
	}
}

void displayArrays(int array[], int size)
{
	for (int i=0; i<size ; i++)
	{
		printf("%d ", array[i]);
	}
}

// Bubble Sort implementation
void bubbleSort(int array[], int size, int *iterations)
{
	*iterations = 0;
	int temp;
	for(int i=0; i<size-1; i++)
	{
		for(int j=0; j<size-i-1; j++)
		{
			(*iterations)++;
			if(array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

// Selection Sort implementation
void selectionSort( int array[], int size, int *iterations)
{
	*iterations = 0;
	for(int i=0; i<=size-1; i++)
	{
		int minIndex = i;
		for(int j=i+1; j<size; j++)
		{
			(*iterations)++;
			if(array[j]<array[minIndex])minIndex=j;
		}
		
		if(minIndex!=i)
		{
		int temp = array[minIndex];
		array[minIndex] = array[i];
		array[i] = temp;
		}
	}
}

void insertionSort(int array[], int size, int *iterations) {
    *iterations = 0;
    for (int i = 1; i < size; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
            (*iterations)++;
        }
        array[j + 1] = key;
    }
}

void merge(int array[], int left, int mid, int right, int *iterations) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = array[left + i];
    for (int i = 0; i < n2; i++) R[i] = array[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        (*iterations)++;
        if (L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        } else {
            array[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int left, int right, int *iterations) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(array, left, mid, iterations);
        mergeSort(array, mid + 1, right, iterations);
        merge(array, left, mid, right, iterations);
    }
}

int partition(int array[], int low, int high, int *iterations) {
    int pivot = array[high];
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        (*iterations)++;
        if (array[j] < pivot) {
            i++;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    int temp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temp;
    return (i + 1);
}

void quickSort(int array[], int low, int high, int *iterations) {
    if (low < high) {
        int pi = partition(array, low, high, iterations);
        quickSort(array, low, pi - 1, iterations);
        quickSort(array, pi + 1, high, iterations);
    }
}


