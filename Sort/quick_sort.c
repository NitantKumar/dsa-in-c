#include "../dsa.h"

void quick_sort(int array[], int start_index, int end_index) {
    // Base case: if the array has 0 or 1 element, it's already sorted
    if (start_index >= end_index) {
        return;
    }

    // Pick the last element as our pivot
    int pivot_value = array[end_index];
    int partition_index = start_index;

    // Move smaller values are to the left
    for (int j = start_index; j < end_index; j++) {
        if (array[j] <= pivot_value) {
            int temp = array[partition_index];
            array[partition_index] = array[j];
            array[j] = temp;
            partition_index++;
        }
    }

    // Swap the pivot into its final place
    int temp = array[partition_index];
    array[partition_index] = array[end_index];
    array[end_index] = temp;

    // Recursively sort the two sides
    quick_sort(array, start_index, partition_index - 1);
    quick_sort(array, partition_index + 1, end_index);
}
