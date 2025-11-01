#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* catAndMouse(int x, int y, int z) {
    int distance_cat_a = abs(x - z);
    int distance_cat_b = abs(y - z);

    if (distance_cat_a < distance_cat_b) {
        return "Cat A";
    } else if (distance_cat_b < distance_cat_a) {
        return "Cat B";
    } else {
        return "Mouse C";
    }
}

int main() {
    int q;
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        char* result = catAndMouse(x, y, z);
        printf("%s\n", result);
    }

    return 0;
}
