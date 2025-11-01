#include <stdio.h>
#include <stdlib.h>

int* breakingRecords(int scores_count, int* scores, int* result_count) {
    int* result = (int*)malloc(2 * sizeof(int));
    *result_count = 2;

    int max_record = scores[0];
    int min_record = scores[0];
    int max_breaks = 0;
    int min_breaks = 0;

    for (int i = 1; i < scores_count; i++) {
        if (scores[i] > max_record) {
            max_breaks++;
            max_record = scores[i];
        } else if (scores[i] < min_record) {
            min_breaks++;
            min_record = scores[i];
        }
    }

    result[0] = max_breaks;
    result[1] = min_breaks;

    return result;
}

int main() {
    int n;
    scanf("%d", &n);

    int* scores = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    int result_count;
    int* result = breakingRecords(n, scores, &result_count);

    printf("%d %d\n", result[0], result[1]);

    free(scores);
    free(result);

    return 0;
}

