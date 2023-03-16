#include <stdio.h>

int search(int arr[], int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            return search(arr, mid + 1, right, target);
        } else {
            return search(arr, left, mid - 1, target);
        }
    }

    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int index = search(arr, 0, n - 1, target);
    if (index == -1) {
        printf("key %d not found in the array\n", target);
    } else {
        printf("key %d found at index %d\n", target, index);
    }
    return 0;
}