#include <stdio.h>
#include <stdlib.h>

int* countingSort(int arr[], int n) {

    int* freq = (int*)calloc(100, sizeof(int));

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    return freq;
}

int main() {
    int n;

    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int* result = countingSort(arr, n);


    for (int i = 0; i < 100; i++) {
        printf("%d", result[i]);
        if (i < 99) {
            printf(" ");
        }
    }
    printf("\n");

    free(arr);
    free(result);

    return 0;
}
