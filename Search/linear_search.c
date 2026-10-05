#include "../dsa.h"

int linear_search(int arr[], int len, int value){
    int index = -1;
    for(int i = 0; i < len; i++){
        if(arr[i] == value){
            index = i;
            break;
        }
    }
    return index;
}