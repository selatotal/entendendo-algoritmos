#include <stdio.h>
#include <stdlib.h>

#define NUM_ITEMS 10

int sum(int arr[], int index){
    if (index == NUM_ITEMS){
        return 0;
    }
    return arr[index] + sum(arr, index + 1);
}

int main(){

    int list[NUM_ITEMS] = { 24, 50, 54, 6, 9, 20, 1, 3, 80, 4 };
    printf("Sum: %d\n", sum(list, 0));
    return 0;
}