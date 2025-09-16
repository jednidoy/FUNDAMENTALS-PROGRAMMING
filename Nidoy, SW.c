#include <stdio.h>

int main() {
    int grades;

    printf("Enter your grades:");
    scanf("%d", &grades);

    // Validate input
    if (grades < 0 || grades > 100) {
        printf("Invalid grade.\n");
        return 1;
       
    }

   
    switch (grades / 10) {
        case 10: // grades is 100
        case 9:
            printf("Grade: A\n\n");
                printf("---Thankyou for using ME----");
            break;
        case 8:
            printf("Grade: B\n\n");
               printf("---Thankyou for using ME----");
            break;
        case 7:
        case 6:
            printf("Grade: C\n");
               printf("---Thankyou for using ME----");
            break;
        default:
            printf("Grade: Failed\n");
                printf("---Thankyou for using ME----");
        
    }

    return 0;
}