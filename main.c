#include "dsa.h"

int main() {
    printf("--- Testing Search Algorithms ---\n");
    int search_arr[] = {2, 3, 4, 10, 40};
    int n_search = sizeof(search_arr) / sizeof(search_arr[0]);
    printf("Binary Search (Iterative) for 10: Index %d\n\n", binary_search_iterative(search_arr, n_search, 10));

    printf("--- Testing Quick Sort ---\n");
    int quick_data[] = {8, 3, 1, 7, 0, 10, 2};
    int n_quick = sizeof(quick_data) / sizeof(quick_data[0]);
    quick_sort(quick_data, 0, n_quick - 1);
    print_array(quick_data, n_quick);

    printf("\n--- Testing Maximum Subarray ---\n");
    int sub_arr[] = {3, -2, 5, -1};
    printf("Max Subarray Sum: %d\n", max_sum_subarr(sub_arr, 4));

    return 0;
}