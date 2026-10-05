#ifndef DSA_H
#define DSA_H

// Common Standard Libraries
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Macro helper
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// --- Search Functions ---
int linear_search(int arr[], int len, int value);
int binary_search_iterative(int arr[], int len, int value);
int binary_search_recursive(int arr[], int low, int high, int x);

// --- Sort Functions ---
int* insertion_sort(int arr[], int len);
void merge_sort(int array[], int start, int end);
void quick_sort(int array[], int start_index, int end_index);
void counting_sort(int array[], int len);
void radix_sort(int array[], int n);

// --- Divide and Conquer ---
int max_sum_subarr(int arr[], int len);

// --- Utility Functions ---
void print_array(int *arr, int len);

#endif