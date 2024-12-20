/*Remove an element: Given an integer array arr and an integer key, write a program in C to return the number of values not equal to key.*/

#include <stdio.h>
int countValuesNotEqualToKey(int arr[], int size, int key) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] != key) {
            count++;
        }
    }

    return count;
}
int main() {
    int arr[] = {1, 2, 3, 4, 3, 5, 3, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    printf("Given Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Key: %d\n", key);
    int count = countValuesNotEqualToKey(arr, size, key);
    printf("Number of values not equal to %d: %d\n", key, count);
    return 0;
}
