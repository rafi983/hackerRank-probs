#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d", max - arr[i]);
        if (i < N - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}