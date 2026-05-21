#include "algorithms.h"

void swap_pos(int *arr, int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void insertion_sort(int *arr, int length) {
    if (arr == NULL) return;

    for (int i = 0; i < length; i++) {
        for (int j = length - 1; j > i; j--) {
            if (arr[i] > arr[j]) swap_pos(arr, i, j);
        }
    }
}

int partition(int *arr, int low, int high){
    int pivot = arr[high];
    int newPivotIndex = low - 1;
    
    for (int i = low; i < high; i++){
        if (arr[i] <= pivot){
            ++newPivotIndex;
            swap_pos(arr, i, newPivotIndex);
        }
    }
    swap_pos(arr, newPivotIndex + 1, high);
    return newPivotIndex + 1;
}

void _quick_sort(int *arr, int low, int high){
    if (arr == NULL) return;
    if (low > high || low < 0) return;

    if (low < high){
        int pivotIndex = partition(arr, low, high);

        _quick_sort(arr, low, pivotIndex - 1);
        _quick_sort(arr, pivotIndex + 1, high);
    }
}

void quick_sort(int *arr, int length){
    _quick_sort(arr, 0, length - 1);
}

void bubble_sort(int *arr, int length){
    if (arr == NULL) return;

    for (int i = 0; i < length; i++){
        for (int j = 0; j < length - i - 1; j++){
            if(arr[j] > arr[j + 1]) swap_pos(arr, j, j + 1);
        }
    }
}
