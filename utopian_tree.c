#include <stdio.h>

static int utopianTree(int n) {
    int height = 1;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) {
            height *= 2;
        } else {
            height += 1;
        }
    }
    return height;
}

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }
    for (int caseNo = 0; caseNo < t; ++caseNo) {
        int n;
        if (scanf("%d", &n) != 1) {
            return 0;
        }
        int h = utopianTree(n);
        printf("%d\n", h);
    }
    return 0;
}

