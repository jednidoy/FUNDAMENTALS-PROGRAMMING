#include <stdio.h>

int main() {
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);

    if (grade >= 75) {
        printf("Passed\n");
    } else if (grade >= 0 && grade <= 74) {
        printf("Failed\n");
    } else {
        printf("Invalid grade.\n");
    }

    return 0;
}


