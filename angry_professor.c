#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* angryProfessor(int k, int a_count, int* a) {
    int on_time_count = 0;

    for (int i = 0; i < a_count; i++) {
        if (a[i] <= 0) {
            on_time_count++;
        }
    }

    if (on_time_count >= k) {
        return "NO";
    } else {
        return "YES";
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n, k;
        scanf("%d %d", &n, &k);

        int* a = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }

        char* result = angryProfessor(k, n, a);
        printf("%s\n", result);

        free(a);
    }

    return 0;
}

