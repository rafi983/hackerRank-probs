#include <stdio.h>
#include <stdlib.h>

int workbook(int n, int k, int* arr) {
    int special_problems = 0;
    int page_number = 1;

    for (int i = 0; i < n; i++) {
        int problems_in_chapter = arr[i];

        for (int problem_index = 1; problem_index <= problems_in_chapter; problem_index++) {
            if (problem_index == page_number) {
                special_problems++;
            }

            if (problem_index % k == 0 && problem_index < problems_in_chapter) {
                page_number++;
            }
        }
        page_number++;
    }

    return special_problems;
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);

    int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = workbook(n, k, arr);
    printf("%d\n", result);

    free(arr);

    return 0;
}

