#include <stdio.h>
#include <stdlib.h>

#define NUM_ITEMS 10

void quicksort(int arr[], int length, int *result){
    int pivot;
    int lowers[NUM_ITEMS], lowers_size = 0;
    int greaters[NUM_ITEMS], greaters_size = 0;
    int sorted[NUM_ITEMS], sorted_pos = 0;

    if (length < 2){
        return arr;
    }
    pivot = arr[0];
    for (int i = 1; i < length; i++){
        if (arr[i] <= pivot){
            lowers[lowers_size++] = arr[i];
        } else {
            greaters[greaters_size++] = arr[i];
        }
    }

    quicksort(lowers, lowers_size, &lowers);
    quicksort(greaters, greaters_size, &greaters);
    for (int i = 0; i < lowers_size; i++){
        result[sorted_pos++] = lowers[i];
    }
    result[sorted_pos++] = pivot;
    for (int i = 0; i < greaters_size; i++){
        result[sorted_pos++] = greaters[i];
    }
}

int main(){

    int list[NUM_ITEMS] = { 24, 50, 54, 6, 9, 20, 1, 3, 80, 4 };
    quicksort(list, NUM_ITEMS, &list);
    for(int i = 0; i < NUM_ITEMS; i++){
        printf("%d ", list[i]);
    }
    printf("\n");
    return 0;
}
