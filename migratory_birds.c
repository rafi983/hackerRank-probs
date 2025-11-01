#include <stdio.h>
#include <stdlib.h>

int migratoryBirds(int arr_count, int* arr) {
    int count[6] = {0};

    for (int i = 0; i < arr_count; i++) {
        count[arr[i]]++;
    }

    int max_count = 0;
    int result_type = 1;

    for (int type = 1; type <= 5; type++) {
        if (count[type] > max_count) {
            max_count = count[type];
            result_type = type;
        }
    }

    return result_type;
}

int main() {
    int n;
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = migratoryBirds(n, arr);
    printf("%d\n", result);

    free(arr);

    return 0;
}
