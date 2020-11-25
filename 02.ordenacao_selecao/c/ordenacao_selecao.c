#include <stdio.h>
#include <stdlib.h>

#define NUM_ITEMS 10

int search_lower(int arr[], int length){
    int lower = arr[0];
    int lower_index = 0;
    
    for (int i = 0; i < length; i++){
        if (arr[i] < lower){
            lower = arr[i];
            lower_index = i;
        }
    }
    return lower_index;
}

int *remove_item(int arr[], int index){
    for (int i = index; i < NUM_ITEMS - 1; i++){
        arr[i] = arr[i+1];
    }
    return arr;
}

int *selection_order(int arr[]){
    static int new_array[NUM_ITEMS];
    int length = NUM_ITEMS;

    for(int i = 0; i < NUM_ITEMS; i++){
        int lower = search_lower(arr, length);
        new_array[i] = arr[lower];
        arr = remove_item(arr, lower);
        length--;
    }

    return new_array;
}

int main(){
    int list[NUM_ITEMS] = { 24, 50, 54, 6, 9, 20, 1, 3, 80, 4 };
    int *array = selection_order(list);
    for (int i = 0; i < NUM_ITEMS; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}