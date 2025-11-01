#include <stdio.h>
#include <stdlib.h>

void bonAppetit(int bill[], int n, int k, int b) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (i != k) {
            total += bill[i];
        }
    }

    int fair_share = total / 2;

    if (fair_share == b) {
        printf("Bon Appetit\n");
    } else {
        printf("%d\n", b - fair_share);
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int *bill = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &bill[i]);
    }

    int b;
    scanf("%d", &b);

    bonAppetit(bill, n, k, b);

    free(bill);

    return 0;
}
