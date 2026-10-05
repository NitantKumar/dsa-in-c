#include "../dsa.h"

int binary_search_iterative(int arr[], int len, int value) {
    int low = 0;
    int high = len-1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // we check if x is present at mid
        if (arr[mid] == value)
            return mid;

        // if x greater, ignore left half
        if (arr[mid] < value)
            low = mid + 1;

        // if x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // reached here, hence element was not present
    return -1;
}

int binary_search_recursive(int arr[], int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        // If the element is present at the middle
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, it will be on the left of the array.
        if (arr[mid] > x)
            return binary_search_recursive(arr, low, mid - 1, x);

        // Else the element is in the right. 
        return binary_search_recursive(arr, mid + 1, high, x);
    }

    // If we have reached here, element is not in the array.
    return -1;
}