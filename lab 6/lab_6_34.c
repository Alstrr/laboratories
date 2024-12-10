/* Даны натуральное число и действительное . Вычислить: x/1! + x/2! + ... + 1/n!/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    double x;
    double sum = 0.0;
    double factorial = 1.0;
    int i = 1;

    printf("Введите натуральное число n: ");
    scanf("%d", &n);
    printf("Введите действительное число x: ");
    scanf("%lf", &x);

    do {
        factorial *= i;
        sum += x / factorial;
        i++; 
    } while (i <= n);

    printf("Результат: %.6lf\n", sum); 
    return 0;
}
