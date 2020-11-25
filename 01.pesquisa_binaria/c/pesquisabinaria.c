#include <stdlib.h>
#include <stdio.h>

#define NUM_ITEMS 10

int binary_search(int list[], int item){
    int low = 0;
    int high = NUM_ITEMS - 1;

    while (low <= high){
        int half = (low + high) / 2;
        int try = list[half];
        if (try == item){
            return half;
        } else if (try > item) {
            high = half - 1;
        } else {
            low = half + 1;
        }
    }
    return -1;
}

int main(){

    int list[NUM_ITEMS] = { 1, 3, 4, 6, 9, 20, 24, 50, 54, 80 };
    printf("Position: %d\n", binary_search(list, 3));
    printf("Position: %d\n", binary_search(list, 21));
    return 0;
}