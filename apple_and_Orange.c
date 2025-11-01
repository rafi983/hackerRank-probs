#include <stdio.h>
#include <stdlib.h>

void countApplesAndOranges(int s, int t, int a, int b, int apples[], int m, int oranges[], int n) {
    int apple_count = 0;
    int orange_count = 0;

    for (int i = 0; i < m; i++) {
        int apple_position = a + apples[i];
        if (apple_position >= s && apple_position <= t) {
            apple_count++;
        }
    }

    for (int i = 0; i < n; i++) {
        int orange_position = b + oranges[i];
        if (orange_position >= s && orange_position <= t) {
            orange_count++;
        }
    }

    printf("%d\n%d\n", apple_count, orange_count);
}

int main() {
    int s, t;
    int a, b;
    int m, n;

    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);

    scanf("%d %d", &m, &n);

    int *apples = (int*)malloc(m * sizeof(int));
    int *oranges = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < m; i++) {
        scanf("%d", &apples[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &oranges[i]);
    }

    countApplesAndOranges(s, t, a, b, apples, m, oranges, n);

    free(apples);
    free(oranges);

    return 0;
}
