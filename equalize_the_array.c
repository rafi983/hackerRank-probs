#include <stdio.h>
#include <stdlib.h>

int equalizeArray(int arr[], int n) {
    int count[101] = {0};

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int max_frequency = 0;
    for (int i = 0; i <= 100; i++) {
        if (count[i] > max_frequency) {
            max_frequency = count[i];
        }
    }

    return n - max_frequency;
}

int main() {
    int n;

    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = equalizeArray(arr, n);
    printf("%d\n", result);

    free(arr);

    return 0;
}
