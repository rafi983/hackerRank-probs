#include <stdio.h>

int saveThePrisoner(int n, int m, int s) {

    int lastPosition = ((s - 1) + (m - 1)) % n + 1;
    return lastPosition;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m, s;
        scanf("%d %d %d", &n, &m, &s);

        int result = saveThePrisoner(n, m, s);
        printf("%d\n", result);
    }

    return 0;
}
