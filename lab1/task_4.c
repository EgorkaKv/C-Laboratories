#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, r, b, V, S_cube, S_rect, S_circ, L, Pi=3.14;

    // Виведення запиту на введення
    printf("Input a, r, b:\n");

    // Введення значення змінних
    scanf("%f %f %f", &a, &r, &b);

    S_cube = a*a;
    V = S_cube*a;
    L = 2*Pi*r;
    S_rect = a*b;
    S_circ = Pi*r*r;

    // Виведення результату
    printf("V=%f\nL=%f\nS_cube=%f\nS_rect=%f\nS_circ=%f\n\n",
    V, L, S_cube, S_rect, S_circ);

    // Пауза для користувача
    system("pause");

    return 0;
}
