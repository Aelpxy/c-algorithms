#include <stdio.h>

int linear_search(int arr[], int size, int key) {
    int i = 0;
    arr[size] = key;

    while (arr[i] != key) {
        i++;
    }

    if (i == size) {
        return -1;
    } else {
        return i;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    int index = linear_search(arr, size, key);
    if (index != -1) {
        printf("found at index: %d\n", index);
    } else {
        printf("was not found in the array.\n");
    }

    return 0;
}
