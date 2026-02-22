#include <stdio.h>


int main(void)
{
    char choice = '\0';
    char letter = '\0';
    double grade = 0.0;
    int count = 0;

    printf("=================================\n");
    printf("        GPA Calculator\n");
    printf("=================================\n");
    printf("Enter your letter grades to calculate GPA.\n");
    printf("Valid grades: A, B, C, D, F\n");


    do {
        printf("Enter a letter grade (A, B, C, D, F): ");
        scanf(" %c", &letter);   // must pass address


        switch (letter)
        {
            case 'A':
            case 'a':
                grade += 4.0;
                count++;
                break;


            case 'B':
            case 'b':
                grade += 3.0;
                count++;
                break;


            case 'C':
            case 'c':
                grade += 2.0;
                count++;
                break;


            case 'D':
            case 'd':
                grade += 1.0;
                count++;
                break;


            case 'F':
            case 'f':
                grade += 0.0;
                count++;
                break;


            default:
                printf("Invalid grade entered. Ignoring.\n");
        }


        printf("Enter another grade? (y/n): ");
        scanf(" %c", &choice);   // must pass address


    } while (choice == 'y' || choice == 'Y');


    if (count > 0) {
        printf("GPA for %d courses: %.2f\n", count, grade / count);
    } else {
        printf("No valid grades entered.\n");
    }


    return 0;
}



