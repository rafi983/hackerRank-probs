#include <stdio.h>
#include <stdlib.h>

int beautifulTriplets(int d, int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            if (arr[j] - arr[i] == d) {
                for (int k = j + 1; k < n; k++) {
                    if (arr[k] - arr[j] == d) {
                        count++;
                    }
                    if (arr[k] - arr[j] > d) {
                        break;
                    }
                }
            }
            if (arr[j] - arr[i] > d) {
                break;
            }
        }
    }

    return count;
}

int main() {
    int n, d;

    scanf("%d %d", &n, &d);

    int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = beautifulTriplets(d, arr, n);
    printf("%d\n", result);

    free(arr);

    return 0;
}
