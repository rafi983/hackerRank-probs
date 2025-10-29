#include <stdio.h>
#include <stdlib.h>

static long long reverse_number(long long x) {
    long long rev = 0;
    while (x > 0) {
        rev = rev * 10 + (x % 10);
        x /= 10;
    }
    return rev;
}

static int beautifulDays(long long i, long long j, long long k) {
    int count = 0;
    for (long long day = i; day <= j; ++day) {
        long long rev = reverse_number(day);
        long long diff = llabs(day - rev);
        if (diff % k == 0) {
            ++count;
        }
    }
    return count;
}

int main(void) {
    long long i, j, k;
    if (scanf("%lld %lld %lld", &i, &j, &k) != 3) {
        return 0;
    }
    int result = beautifulDays(i, j, k);
    printf("%d\n", result);
    return 0;
}

