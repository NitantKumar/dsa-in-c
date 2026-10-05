// Maximum Subarray problem
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define max(a, b) ((a > b) ? a : b)

int max_sum_subarr(int arr[], int len)
{
    if (len == 1)
    {
        return arr[0];
    }
    int split = len / 2;
    int left_mss = max_sum_subarr(arr, split);
    int right_mss = max_sum_subarr(arr + split, len - split);
    int leftsum = INT_MIN, rightsum = INT_MIN, sum = 0;
    for (int i = split; i < len; i++)
    {
        sum += arr[i];
        rightsum = max(rightsum, sum);
    }
    sum = 0;
    for (int i = split - 1; i >= 0; i--)
    {
        sum += arr[i];
        leftsum = max(leftsum, sum);
    }
    int result = max(left_mss, right_mss);
    return max(result, leftsum + rightsum);
}