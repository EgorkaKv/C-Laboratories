#include<stdio.h>
#include <stdlib.h>

int main() {
    float x;
    puts("Input float value:");
    scanf("%f",&x);

    if(x>0)
        if(x>100)
            printf("Value %.2f >0 and > 100\n",x);
        else
            printf("Value %.2f >0 and <= 100\n",x);
    else
        if(x < -100)
        printf("Value %.2f <=0 and < -100\n",x);
    else
        printf("0>=Value %.2f>=-100\n",x);


    // Task 1
    int num1;
    printf("Enter an integer: ");
    scanf("%d", &num1);
    if (num1 % 2 == 0) {
        if (num1 > 0) {
            printf("Number %d is even and positive\n", num1);
        } else {
            printf("Number %d is even and negative\n", num1);
        }
    } else {
        if (num1 > 25) {
            printf("Number %d is odd and greater than 25\n", num1);
        } else {
            printf("Number %d is odd and less than or equal to 25\n", num1);
        }
    }

    // Task 2
    int num2, num3;
    printf("Enter two integers: ");
    scanf("%d %d", &num2, &num3);
    if (num2 > num3) {
        if (num2 >= 5 && num2 <= 30) {
            printf("The larger number %d is in the range from 5 to 30\n", num2);
        } else {
            printf("The larger number %d is not in the range from 5 to 30\n", num2);
        }
    } else {
        if (num3 >= 5 && num3 <= 30) {
            printf("The larger number %d is in the range from 5 to 30\n", num3);
        } else {
            printf("The larger number %d is not in the range from 5 to 30\n", num3);
        }
    }

    // Task 3
    int num4;
    printf("Enter an integer: ");
    scanf("%d", &num4);
    if (num4 > 50) {
        if (num4 % 4 == 0) {
            printf("Number %d is greater than 50 and divisible by 4\n", num4);
        } else {
            printf("Number %d is greater than 50 and not divisible by 4\n", num4);
        }
    } else {
        if (num4 % 3 == 0) {
            printf("Number %d is less than or equal to 50 and divisible by 3\n", num4);
        } else {
            printf("Number %d is less than or equal to 50 and not divisible by 3\n", num4);
        }
    }

    // Task 4
    int num5, num6;
    printf("Enter two integers: ");
    scanf("%d %d", &num5, &num6);
    if (num5 < num6) {
        if (num5 % 2 != 0) {
            printf("The smaller number %d is odd\n", num5);
        } else {
            printf("The smaller number %d is even\n", num5);
        }
    } else {
        if (num6 % 2 != 0) {
            printf("The smaller number %d is odd\n", num6);
        } else {
            printf("The smaller number %d is even\n", num6);
        }
    }

    // Task 5
    int num7;
    printf("Enter an integer: ");
    scanf("%d", &num7);
    if (num7 > 0) {
        if (num7 % 5 == 0) {
            printf("Number %d is positive and divisible by 5\n", num7);
        } else {
            printf("Number %d is positive but not divisible by 5\n", num7);
        }
    } else {
        if (num7 < -100) {
            printf("Number %d is negative and less than -100\n", num7);
        } else {
            printf("Number %d is negative but not less than -100\n", num7);
        }
    }



    system("pause");
    return 0;}
