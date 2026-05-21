#include <stdio.h>
#include <stdlib.h>
#include "algorithms.h"

void printArray(int *arr, size_t len){
    for(int i = 0; i < len; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int main(int, char**){
    int arr[] = {124, 23, 33, 102, 239, 921, 293, 2, 366, 50};

    printf("Unsorted array: ");
    printArray(arr, 10);

    //quick_sort(arr, 10);
    bubble_sort(arr, 10);

    printf("Sorted array: ");
    printArray(arr, 10);

    return EXIT_SUCCESS;
}
