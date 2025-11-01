#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* dayOfProgrammer(int year) {
    char* result = (char*)malloc(11 * sizeof(char));
    int is_leap = 0;

    if (year == 1918) {
        sprintf(result, "26.09.%d", year);
        return result;
    } else if (year < 1918) {
        is_leap = (year % 4 == 0);
    } else {
        is_leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    }

    int days_till_august;
    if (is_leap) {
        days_till_august = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
    } else {
        days_till_august = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
    }

    int day_in_september = 256 - days_till_august;
    sprintf(result, "%02d.09.%d", day_in_september, year);

    return result;
}

int main() {
    int year;
    scanf("%d", &year);

    char* result = dayOfProgrammer(year);
    printf("%s\n", result);

    free(result);

    return 0;
}

