#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <stddef.h>

/// @brief Swaps two elements in an array by index
void swap_pos(int *arr, int a, int b);

/// @brief O(n^2) — builds sorted output by shifting each element left into its correct position
/// @param arr Array to be sorted
/// @param length Number of elements in the array
void insertion_sort(int *arr, int length);

/// @brief O(n log n) average, O(n^2) worst — partitions around a pivot and recursively sorts each half
/// @param arr Array to be sorted
/// @param length Number of elements in the array
void quick_sort(int *arr, int length);

/// @brief O(n^2) — repeatedly steps through the array swapping adjacent elements that are out of order
/// @param arr Array to be sorted
/// @param length Number of elements in the array
void bubble_sort(int *arr, int length);

/// @brief O(n log n) — divides array in half recursively then merges sorted halves back together
/// @param arr Array to be sorted
/// @param length Number of elements in the array
void merge_sort(int *arr, int length);

/// @brief O(n log n) — builds a max-heap then repeatedly extracts the largest element into sorted position
/// @param arr Array to be sorted
/// @param length Number of elements in the array
void heap_sort(int *arr, int length);
#endif
