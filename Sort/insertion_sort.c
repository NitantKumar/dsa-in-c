#include "../dsa.h"

void print_array(int *arr, int len)
{

    for (int i = 0; i < len; i++)
    {

        printf("%d ", arr[i]);
    }

    printf("\n");
}

int *insertion_sort(int arr[], int len)
{ // int arr[] also could work.

    for (int i = 1; i < len; i++)
    {

        int val = arr[i];

        int j = i - 1;

        while (j >= 0 && arr[j] > val)
        {

            arr[j + 1] = arr[j];

            j--;
        }

        arr[j + 1] = val;
        print_array(arr, 6);
    }
    return arr;
}

