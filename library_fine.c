#include <stdio.h>

static int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    if (y1 > y2) {
        return 10000;
    }
    if (y1 < y2) {
        return 0;
    }
    if (m1 > m2) {
        return 500 * (m1 - m2);
    }
    if (m1 < m2) {
        return 0;
    }
    if (d1 > d2) {
        return 15 * (d1 - d2);
    }
    return 0;
}

int main(void) {
    int d1, m1, y1;
    int d2, m2, y2;

    if (scanf("%d %d %d", &d1, &m1, &y1) != 3) {
        return 0;
    }
    if (scanf("%d %d %d", &d2, &m2, &y2) != 3) {
        return 0;
    }

    int fine = libraryFine(d1, m1, y1, d2, m2, y2);
    printf("%d\n", fine);
    return 0;
}

