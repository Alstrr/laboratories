/* Решить квадратное уравнение ax2 + bx + c = 0 */


#include <stdio.h>
#include <math.h>
#include <locale.h>

void solve(double a, double b, double c) {
    double discriminant, root1, root2;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Два различных корня: x1 = %.2lf, x2 = %.2lf\n", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Один корень: x = %.2lf\n", root1);
    }
    else {
        printf("Нет действительных корней.\n");
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b, c;

    printf("Введите коэффициенты a, b и c (ax^2 + bx + c = 0):\n");
    scanf_s("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Коэффициент a не должен быть равен 0. Это не квадратное уравнение.\n");
        return 1;
    }

    solve(a, b, c);

    return 0;
}
