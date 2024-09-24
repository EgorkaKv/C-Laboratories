#include <stdio.h>
#include <stdlib.h>
int main() {
    // Визначення та ініціалізація змінних
    short shortx1 = 32763;
    unsigned short ushorty1 = 65531;
    char charz1 = 122;
    unsigned char ucharv1 = 2;

    // Обчислення максимальних значень для кожного типу
    short shortx2 = shortx1+4;
    unsigned short ushorty2 = ushorty1+4;
    char charz2 = charz1+5;
    unsigned char ucharv2 = ucharv1 + 253;

    // Обчислення значень, більших за максимальні на 1
    short shortx3 = shortx2 + 1;
    unsigned short ushorty3 = ushorty2 + 1;
    char charz3 = charz2 + 1;
    unsigned char ucharv3 = ucharv2 + 1;

    // Виведення результатів
    printf("x1=%d, x2=%d, x3=%d\n", shortx1, shortx2, shortx3);
    printf("y1=%u, y2=%u, y3=%u\n", ushorty1, ushorty2, ushorty3);
    printf("z1=%d, z2=%d, z3=%d\n", charz1, charz2, charz3);
    printf("v1=%u, v2=%u, v3=%u\n\n", ucharv1, ucharv2, ucharv3);


    // Визначення та ініціалізація змінних
    short minx1 = -32763;
    unsigned short miny1 = 31;
    char minz1 = -120;
    unsigned char minv1 = 20;

    // Обчислення мінімальних значень для кожного типу
    short minx2 = minx1-5;
    unsigned short miny2 = miny1-31;
    char minz2 = minz1-8;
    unsigned char minv2 = minv1-20;

    // Обчислення значень, менших за мінімальні на 1
    short minx3 = minx2 - 1;
    unsigned short miny3 = miny2 - 1;
    char minz3 = minz2 - 1;
    unsigned char minv3 = minv2 - 1;

    // Виведення результатів
    printf("x1=%d, x2=%d, x3=%d\n", minx1, minx2, minx3);
    printf("y1=%u, y2=%u, y3=%u\n", miny1, miny2, miny3);
    printf("z1=%d, z2=%d, z3=%d\n", minz1, minz2, minz3);
    printf("v1=%u, v2=%u, v3=%u\n\n", minv1, minv2, minv3);


    // Визначення та ініціалізація змінних
    int x1 = 2147483645;
    unsigned int y1 = 4294967290;


    // Обчислення максимальних значень для кожного типу
    int x2 = x1+2;
    unsigned int y2 = y1+5;


    // Обчислення значень, більших за максимальні на 1
    int x3 = x2 + 1;
    unsigned int y3 = y2 + 1;


    // Виведення результатів
    printf("x1=%d, x2=%d, x3=%d\n", x1, x2, x3);
    printf("y1=%u, y2=%u, y3=%u\n", y1, y2, y3);

    return 0;}
