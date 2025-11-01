#include <stdio.h>
#include <stdlib.h>

int viralAdvertising(int n) {
    int shared = 5;
    int cumulative_likes = 0;

    for (int day = 1; day <= n; day++) {
        int liked = shared / 2;
        cumulative_likes += liked;
        shared = liked * 3;
    }

    return cumulative_likes;
}

int main() {
    int n;
    scanf("%d", &n);

    int result = viralAdvertising(n);
    printf("%d\n", result);

    return 0;
}

