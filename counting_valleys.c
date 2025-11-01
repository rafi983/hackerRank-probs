#include <stdio.h>
#include <string.h>

int countingValleys(int steps, char* path) {
    int level = 0;
    int valleys = 0;
    int inValley = 0;

    for (int i = 0; i < steps; i++) {
        if (path[i] == 'U') {
            level++;
        } else if (path[i] == 'D') {
            level--;
        }

        if (level < 0 && !inValley) {
            inValley = 1;
            valleys++;
        } else if (level >= 0) {
            inValley = 0;
        }
    }

    return valleys;
}

int main() {
    int steps;
    scanf("%d", &steps);

    char path[1000001];
    scanf("%s", path);

    int result = countingValleys(steps, path);
    printf("%d\n", result);

    return 0;
}
