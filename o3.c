#include <stdio.h>
#define MAX_SIZE 100

void findDuplicates(int arr[], int size) {
    int hash[MAX_SIZE] = {0};

    printf("Tekrar eden elemanlar: ");

    for (int i = 0; i < size; i++) {
        hash[arr[i]]++;
        if (hash[arr[i]] > 1) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
}

int main() {
    int arr[] = {2, 3, 4, 2, 5, 4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, size);

    return 0;
}
