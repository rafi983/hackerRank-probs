#include <stdio.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) {
        return 0;
    }

    for (int i = 1; i <= N; i++) {
        for (int d = 1; d <= i; d++) {
            printf("%d", d);
        }
        if (i < N || N > 1) printf("\n");
    }

    for (int i = N - 1; i >= 1; i--) {
        for (int s = 0; s < N - i; s++) {
            putchar(' ');
        }
        for (int d = 1; d <= i; d++) {
            printf("%d", d);
        }
        if (i > 1) printf("\n");
    }

    return 0;
}

