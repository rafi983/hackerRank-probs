#include <stdio.h>

const char* kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 <= v2) {
        if (x1 == x2 && v1 == v2) {
            return "YES";
        }
        return "NO";
    }


    if ((x2 - x1) % (v1 - v2) == 0) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int x1, v1, x2, v2;

    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    const char* result = kangaroo(x1, v1, x2, v2);

    printf("%s\n", result);

    return 0;
}

