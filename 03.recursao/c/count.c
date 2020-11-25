#include <stdio.h>
#include <stdlib.h>

#define NUM_ITEMS 10

int count(int arr[], int index){
    if (index == NUM_ITEMS){
        return 0;
    }
    return 1 + count(arr, index + 1);
}

int main(){

    int list[NUM_ITEMS] = { 24, 50, 54, 6, 9, 20, 1, 3, 80, 4 };
    printf("Count: %d\n", count(list, 0));
    return 0;
}
