#include <stdio.h>
#include <stdlib.h>

void permutationEquation(int n, int* p) {

    int* pos = (int*)malloc((n + 1) * sizeof(int));
    for (int i = 0; i < n; i++) {
        pos[p[i]] = i + 1;
    }

    for (int x = 1; x <= n; x++) {
        int indexOfX = pos[x];
        int y = pos[indexOfX];
        printf("%d\n", y);
    }

    free(pos);
}

int main() {
    int n;
    scanf("%d", &n);

    int* p = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    permutationEquation(n, p);

    free(p);

    return 0;
}

