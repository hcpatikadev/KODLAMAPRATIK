#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[] = {10, 5, 7, 2, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxNumber = findMax(arr, size);

    printf("En büyük sayı: %d\n", maxNumber);

    return 0;
}
