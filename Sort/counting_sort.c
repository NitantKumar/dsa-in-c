#include "../dsa.h"

void counting_sort(int array[], int len) {
    //  determine the range
    int max_val = array[0];
    for (int i = 1; i < len; i++) {
        if (array[i] > max_val) max_val = array[i];
    }

    // count array with zeros
    int* count_array = (int*)calloc(max_val + 1, sizeof(int));
    
    // Store the frequency of each element
    for (int i = 0; i < len; i++) {
        count_array[array[i]]++;
    }

    // 4. Transform count array into cumulative count
    for (int i = 1; i <= max_val; i++) {
        count_array[i] += count_array[i - 1];
    }

    // Build output array
    int* output_array = (int*)malloc(len * sizeof(int));
    // Iterate backwards to maintains relative order
    for (int i = len - 1; i >= 0; i--) {
        output_array[count_array[array[i]] - 1] = array[i];
        count_array[array[i]]--;
    }

    // 6. Copy to original array
    for (int i = 0; i < len; i++) {
        array[i] = output_array[i];
    }

    free(count_array);
    free(output_array);
}
