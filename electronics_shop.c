#include <stdio.h>
#include <stdlib.h>

int getMoneySpent(int keyboards_count, int* keyboards, int drives_count, int* drives, int budget) {
    int max_cost = -1;

    for (int i = 0; i < keyboards_count; i++) {
        for (int j = 0; j < drives_count; j++) {
            int total_cost = keyboards[i] + drives[j];

            if (total_cost <= budget && total_cost > max_cost) {
                max_cost = total_cost;
            }
        }
    }

    return max_cost;
}

int main() {
    int budget, n, m;
    scanf("%d %d %d", &budget, &n, &m);

    int* keyboards = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &keyboards[i]);
    }

    int* drives = (int*)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++) {
        scanf("%d", &drives[i]);
    }

    int result = getMoneySpent(n, keyboards, m, drives, budget);
    printf("%d\n", result);

    free(keyboards);
    free(drives);

    return 0;
}
