#include <stdio.h>
#include <stdlib.h>

int pageCount(int n, int p) {

    int turns_from_front = p / 2;


    int turns_from_back = (n / 2) - (p / 2);

    if (turns_from_front < turns_from_back) {
        return turns_from_front;
    } else {
        return turns_from_back;
    }
}

int main() {
    int n, p;
    scanf("%d", &n);
    scanf("%d", &p);

    int result = pageCount(n, p);
    printf("%d\n", result);

    return 0;
}

