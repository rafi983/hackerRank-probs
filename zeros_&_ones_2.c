#include <stdio.h>

int main() {
    int N, X;

    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &X);

    if (arr[X - 1] == 0) {
        arr[X - 1] = 1;
    } else {
        arr[X - 1] = 0;
    }

    for (int i = 0; i < N; i++) {
        printf("%d", arr[i]);
        if (i < N - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

