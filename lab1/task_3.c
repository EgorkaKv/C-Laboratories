#include <stdio.h>
#include <math.h>  // для математичних операцій

int main() {
    // 1. Обчислення res = (4.2 * x - z)^2 / 3.5 з трьома цифрами цілої частини та двома дробової
    {
        float x, z, res;
        printf("input x, z: ");
        scanf("%f %f", &x, &z);
        res = pow((4.2 * x - z), 2) / 3.5;
        printf("Res 1: %6.2f\n", res);  // 6 позицій загалом (3 цілих + 2 дробових + знак і крапка)
    }

    // 2. Обчислення res = a + 2.8 * b - c^2 з двома цифрами цілої частини та трьома дробової
    {
        double a, b, c, res;
        printf("input a, b, c (double): ");
        scanf("%lf %lf %lf", &a, &b, &c);
        res = a + 2.8 * b - pow(c, 2);
        printf("Res 2: %5.3lf\n", res);  // 5 позицій (2 цілих + 3 дробових)
    }

    // 3. Обчислення res = k^2 + (g - k) / 2.3 з чотирма цифрами цілої частини та трьома дробової
    {
        double k, g, res;
        printf("input k та g (double): ");
        scanf("%lf %lf", &k, &g);
        res = pow(k, 2) + (g - k) / 2.3;
        printf("Res 3: %7.3lf\n", res);  // 7 позицій (4 цілих + 3 дробових)
    }

    // 4. Обчислення res = s^3 / v - f * v з двома цифрами цілої частини та чотирма дробової
    {
        float v, s, f, res;
        printf("input v, s, f (float): ");
        scanf("%f %f %f", &v, &s, &f);
        res = pow(s, 3) / v - f * v;
        printf("Res 4: %6.4f\n", res);  // 6 позицій (2 цілих + 4 дробових)
    }

    // 5. Обчислення res = x^3 + z / h^2 з трьома цифрами цілої частини та трьома дробової
    {
        double x, z, h, res;
        printf("input x, z, h (double): ");
        scanf("%lf %lf %lf", &x, &z, &h);
        res = pow(x, 3) + z / pow(h, 2);
        printf("Res 5: %6.3lf\n", res);  // 6 позицій (3 цілих + 3 дробових)
    }

    return 0;
}
