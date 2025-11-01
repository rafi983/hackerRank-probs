#include <stdio.h>
#include <stdlib.h>

int* gradingStudents(int grades_count, int* grades, int* result_count) {
    *result_count = grades_count;
    int* final_grades = (int*)malloc(grades_count * sizeof(int));

    for (int i = 0; i < grades_count; i++) {
        int grade = grades[i];

        if (grade < 38) {
            final_grades[i] = grade;
            continue;
        }

        int next_multiple_of_5 = ((grade / 5) + 1) * 5;

        if (next_multiple_of_5 - grade < 3) {
            final_grades[i] = next_multiple_of_5;
        } else {
            final_grades[i] = grade;
        }
    }

    return final_grades;
}

int main() {
    int n;
    scanf("%d", &n);

    int *grades = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &grades[i]);
    }

    int result_count;
    int* final_grades = gradingStudents(n, grades, &result_count);

    for (int i = 0; i < result_count; i++) {
        printf("%d\n", final_grades[i]);
    }

    free(grades);
    free(final_grades);

    return 0;
}

