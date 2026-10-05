#include "../dsa.h"

// We modify Counting Sort to sort by a specific digit, determined by 'exp'
// exp is 1 for ones place, 10 for tens, 100 for hundreds, etc.
void counting_sort_for_radix(int array[], int n, int exp) {
    int output[n]; 
    int count[10] = {0}; // Digits are always 0-9

    // Store frequency of digits (0-9)
    for (int i = 0; i < n; i++) {
        int digit = (array[i] / exp) % 10;
        count[digit]++;
    }

    // Change count[i] so that count[i] now contains actual position in output[]
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array (going backwards keeps it stable!)
    for (int i = n - 1; i >= 0; i--) {
        int digit = (array[i] / exp) % 10;
        output[count[digit] - 1] = array[i];
        count[digit]--;
    }

    // Copy the output array to array[]
    for (int i = 0; i < n; i++) {
        array[i] = output[i];
    }
}

void radix_sort(int array[], int n) {
    // 1. Find the maximum number to know the number of digits
    int max_val = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > max_val) max_val = array[i];
    }

    // 2. Do counting sort for every digit. 
    // exp is 10^i where i is current digit number
    for (int exp = 1; max_val / exp > 0; exp *= 10) {
        counting_sort_for_radix(array, n, exp);
    }
}