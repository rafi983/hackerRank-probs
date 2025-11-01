#include <stdio.h>
#include <math.h>

int squares(int a, int b) {
    int sqrt_a = (int)ceil(sqrt(a));

    int sqrt_b = (int)floor(sqrt(b));

    if (sqrt_a > sqrt_b) {
        return 0;
    }

    return sqrt_b - sqrt_a + 1;
}

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        int a, b;
        scanf("%d %d", &a, &b);

        int result = squares(a, b);
        printf("%d\n", result);
    }

    return 0;
}
