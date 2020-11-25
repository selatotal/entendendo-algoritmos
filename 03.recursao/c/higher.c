#include <stdio.h>
#include <stdlib.h>

#define NUM_ITEMS 10

int higher(int arr[], int index){
    if (index == NUM_ITEMS - 1){
        return arr[index];
    }
    int outro = higher(arr, index + 1);
    if (arr[index] > outro){
        return arr[index];
    } else {
        return outro;
    }
}

int main(){

    int list[NUM_ITEMS] = { 96, 50, 94, 6, 9, 20, 1, 3, 80, 96 };
    printf("Higher: %d\n", higher(list, 0));
    return 0;
}
