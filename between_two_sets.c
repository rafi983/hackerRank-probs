#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int lcm_of_array(int* arr, int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]);
    }
    return result;
}

int gcd_of_array(int* arr, int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = gcd(result, arr[i]);
    }
    return result;
}

int getTotalX(int a_count, int* a, int b_count, int* b) {
    int lcm_a = lcm_of_array(a, a_count);

    int gcd_b = gcd_of_array(b, b_count);

    int count = 0;

    for (int x = lcm_a; x <= gcd_b; x += lcm_a) {
        if (gcd_b % x == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int* a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int* b = (int*)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    int result = getTotalX(n, a, m, b);
    printf("%d\n", result);

    free(a);
    free(b);

    return 0;
}

