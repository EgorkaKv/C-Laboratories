#include <stdio.h>

int main() {
    // Task 1: Enter 4 real numbers, find the smallest, and check if it is positive or negative
    float num1, num2, num3, num4, smallest;
    printf("Enter four real numbers: ");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }
    if (num4 < smallest) {
        smallest = num4;
    }

    if (smallest > 0) {
        printf("The smallest number %.2f is positive\n", smallest);
    } else {
        printf("The smallest number %.2f is negative\n", smallest);
    }

    // Task 2: Enter 2 integers, for the larger number, determine the range it belongs to
    int num5, num6, larger;
    printf("Enter two integers: ");
    scanf("%d %d", &num5, &num6);

    if (num5 > num6) {
        larger = num5;
    } else {
        larger = num6;
    }

    if (larger < 0) {
        printf("The larger number %d is less than 0\n", larger);
    } else if (larger >= 0 && larger <= 50) {
        printf("The larger number %d is between 0 and 50\n", larger);
    } else if (larger >= 51 && larger <= 100) {
        printf("The larger number %d is between 51 and 100\n", larger);
    } else {
        printf("The larger number %d is greater than 100\n", larger);
    }

    // Task 3: Enter 3 integers, find the smallest, and check if it is even or odd
    int num7, num8, num9, smallest_int;
    printf("Enter three integers: ");
    scanf("%d %d %d", &num7, &num8, &num9);

    smallest_int = num7;
    if (num8 < smallest_int) {
        smallest_int = num8;
    }
    if (num9 < smallest_int) {
        smallest_int = num9;
    }

    if (smallest_int % 2 == 0) {
        printf("The smallest number %d is even\n", smallest_int);
    } else {
        printf("The smallest number %d is odd\n", smallest_int);
    }

    // Task 4: Enter 2 integers, for the smaller number, determine the range it belongs to
    int num10, num11, smaller;
    printf("Enter two integers: ");
    scanf("%d %d", &num10, &num11);

    if (num10 < num11) {
        smaller = num10;
    } else {
        smaller = num11;
    }

    if (smaller < -100) {
        printf("The smaller number %d is less than -100\n", smaller);
    } else if (smaller >= -99 && smaller <= 0) {
        printf("The smaller number %d is between -99 and 0\n", smaller);
    } else if (smaller >= 1 && smaller <= 100) {
        printf("The smaller number %d is between 1 and 100\n", smaller);
    } else {
        printf("The smaller number %d is greater than 100\n", smaller);
    }

    // Task 5: Enter 4 real numbers, find the largest, and check if it is greater than 500
    float num12, num13, num14, num15, largest;
    printf("Enter four real numbers: ");
    scanf("%f %f %f %f", &num12, &num13, &num14, &num15);

    largest = num12;
    if (num13 > largest) {
        largest = num13;
    }
    if (num14 > largest) {
        largest = num14;
    }
    if (num15 > largest) {
        largest = num15;
    }

    if (largest > 500) {
        printf("The largest number %.2f is greater than 500\n", largest);
    } else {
        printf("The largest number %.2f is less than or equal to 500\n", largest);
    }

    return 0;
}