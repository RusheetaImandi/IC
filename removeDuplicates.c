/*Remove duplicates from a given array: Given a sorted integer array arr, write a program in C to return the array after removing the duplicates, with all the other elements in place.*/

#include <stdio.h>
int removeDuplicates(int arr[], int size) {
    if (size == 0) return 0; 
    int index = 0; 

    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[index]) {
            index++;
            arr[index] = arr[i]; 
        }
    }
    return index + 1; 
}
int main() {
    int arr[] = {1, 1, 2, 3, 3, 4, 5, 5, 6}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int newSize = removeDuplicates(arr, size);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

