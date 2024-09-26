#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void copyArray(int array1[], int array2[], int size);
void displayArrays(int array[], int size);
void bubbleSort(int array[], int size, int *iterations);
void selectionSort(int array[], int size, int *iterations);
void insertionSort(int array[], int size, int *iterations);
void mergeSort(int array[], int left, int right, int *iterations);
void quickSort(int array[], int low, int high, int *iterations);

#endif
