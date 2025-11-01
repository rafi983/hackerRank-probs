#include <stdio.h>
#include <stdlib.h>

int sockMerchant(int n, int* ar) {
    int color_count[101] = {0};

    for (int i = 0; i < n; i++) {
        color_count[ar[i]]++;
    }

    int total_pairs = 0;
    for (int i = 1; i <= 100; i++) {
        total_pairs += color_count[i] / 2;
    }

    return total_pairs;
}

int main() {
    int n;
    scanf("%d", &n);

    int* ar = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    int result = sockMerchant(n, ar);
    printf("%d\n", result);

    free(ar);

    return 0;
}
