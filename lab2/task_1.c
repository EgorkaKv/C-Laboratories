#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    puts("Input number:");
    scanf("%d",&n);

    if(n%2==0)
        printf("number %d even \n", n);
    else
        printf("number %d odd\n\n", n);


    if(n > 100)
        printf("number %d is more than 100\n", n);
    else
        printf("number %d is less than 100\n", n);

    if(n<20)
        printf("number %d is less than 20\n", n);
    else
        printf("number %d is more than 20\n", n);

    if(n % 10 == 3)
        printf("number %d is ended on 3\n", n);
    else
        printf("number %d is not ended on 3\n", n);

    if(n % 10 == 0)
        printf("number %d is ended on 0\n", n);
    else
        printf("number %d is not ended on 0\n", n);

    if(n % 5 == 0)
        printf("number %d is divided by 5", n);
    else
        printf("number %d is not divided by 5", n);

    system("pause");
    return 0;}
