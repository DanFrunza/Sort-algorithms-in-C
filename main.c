#include <iostream>
#include <stdio.h>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
#include "functions.h"

using namespace std;

int main(int argc, char** argv) {
    printf("This is the generated array for this session: \n");
    //Iterations
    int iterations = 0;
    
    // Start random seed
    srand(time(0));

    // Define min and max sizes for the array
    int minSize = 20;
    int maxSize = 50;

    // Generate random size between minSize and maxSize
    int randomSize = minSize + rand() % (maxSize - minSize + 1);
    
    //Define min and max sisez for the arrays's elements
    int minNumber=-100;
    int maxNumber=+100;
    
    int Array[randomSize];
    int randomNumber;
    //Generate the array
    for(int i=0; i<randomSize; i++)
    {
    	randomNumber = minNumber + rand() % (maxNumber - minNumber + 1);
    	Array[i] = randomNumber ;
    	printf("%d ", Array[i]);
	}
	int CopiedArray[randomSize];
	
	// Copy original array to CopiedArray for Bubble Sort
    copyArray(Array, CopiedArray, randomSize);
	
	printf("\n\nBubbleSort: \n");
	bubbleSort(CopiedArray, randomSize, &iterations);
	displayArrays(CopiedArray, randomSize);
	printf("\nIterations: %d", iterations);
	
	// Reset iterations for Selection Sort
    iterations = 0; // Resetting iterations here
    
    // Copy original array to CopiedArray for Selection Sort
    copyArray(Array, CopiedArray, randomSize);
    printf("\n\nInitial array: \n");
    displayArrays(CopiedArray, randomSize);
	printf("\nIterations: %d", iterations);
	
	printf("\n\nSelectionSort: \n");
	selectionSort(CopiedArray, randomSize, &iterations);
	displayArrays(CopiedArray, randomSize);
	printf("\nIterations: %d", iterations);
	
	// Reset iterations for Insertion Sort
    iterations = 0; // Resetting iterations here
	
	// Copy original array to CopiedArray for Insertion Sort
    copyArray(Array, CopiedArray, randomSize);
    printf("\n\nInitial array: \n");
    displayArrays(CopiedArray, randomSize);
	printf("\nIterations: %d", iterations);
	
	printf("\n\nInsertionSort: \n");
	insertionSort(CopiedArray, randomSize, &iterations);
	displayArrays(CopiedArray, randomSize);
	printf("\nIterations: %d", iterations);
	
	// Reset iterations for Merge Sort
    iterations = 0; // Resetting iterations here
	
	// Copy original array to CopiedArray for Merge Sort
    copyArray(Array, CopiedArray, randomSize);
    printf("\n\nInitial array: \n");
    displayArrays(CopiedArray, randomSize);
	printf("\nIterations: %d", iterations);
	
	printf("\n\nMergeSort: \n");
	mergeSort(CopiedArray, 0, randomSize - 1, &iterations);
	displayArrays(CopiedArray, randomSize);
	printf("\nIterations: %d", iterations);
	
	// Reset iterations for Quick Sort
    iterations = 0; // Resetting iterations here
	
	// Copy original array to CopiedArray for Quick Sort
    copyArray(Array, CopiedArray, randomSize);
    printf("\n\nInitial array: \n");
    displayArrays(CopiedArray, randomSize);
	printf("\nIterations: %d", iterations);
	
	printf("\n\nQuickSort: \n");
	quickSort(CopiedArray, 0, randomSize - 1, &iterations);
	displayArrays(CopiedArray, randomSize);
	printf("\nIterations: %d", iterations);
    
    return 0;
}
