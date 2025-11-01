#include <stdio.h>
#include <stdlib.h>

int jumpingOnClouds(int c[], int n) {
    int jumps = 0;
    int i = 0;

    while (i < n - 1) {
        if (i + 2 < n && c[i + 2] == 0) {
            i += 2;
        }
        else {
            i += 1;
        }
        jumps++;
    }

    return jumps;
}

int main() {
    int n;

    scanf("%d", &n);

    int* c = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }

    int result = jumpingOnClouds(c, n);
    printf("%d\n", result);

    free(c);

    return 0;
}
