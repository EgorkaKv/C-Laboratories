#include <stdio.h>

int main() {
    // Task 1: Enter a month number and output the corresponding semester
    int month;
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 9:
        case 10:
        case 11:
            printf("Autumn Semester\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Spring Semester\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Summer Break\n");
            break;
        default:
            printf("Invalid month number\n");
            break;
    }

    // Task 2: Enter a day of the week and output the number of classes
    int day;
    printf("Enter the day of the week (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("5 classes\n");
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            printf("6 classes\n");
            break;
        case 6:
            printf("2 classes\n");
            break;
        case 7:
            printf("No classes\n");
            break;
        default:
            printf("Invalid day of the week\n");
            break;
    }

    // Task 3: Enter a month number and output the corresponding season
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 3:
        case 4:
        case 5:
            printf("Spring\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Summer\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Autumn\n");
            break;
        case 12:
        case 1:
        case 2:
            printf("Winter\n");
            break;
        default:
            printf("Invalid month number\n");
            break;
    }

    // Task 4: Enter a day of the week and output the corresponding day type
    printf("Enter the day of the week (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Workday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day of the week\n");
            break;
    }

    // Task 5: Enter a month number and output the corresponding quarter
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:
        case 2:
        case 3:
            printf("Quarter 1\n");
            break;
        case 4:
        case 5:
        case 6:
            printf("Quarter 2\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("Quarter 3\n");
            break;
        case 10:
        case 11:
        case 12:
            printf("Quarter 4\n");
            break;
        default:
            printf("Invalid month number\n");
            break;
    }

    return 0;
}