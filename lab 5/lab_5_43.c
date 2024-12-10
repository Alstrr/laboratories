/* Найти сумму первых 30 чисел Фибоначчи.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int n = 30;
    int a = 0;
    int b = 1; 
    int sum = 0; 
    int count = 0;

    while (count < n) {
        sum += a; 
        int next = a + b; 
        a = b;
        b = next;
        count++;
    }

    printf("Сумма первых %d чисел Фибоначчи: %d\n", n, sum);
    return 0;
}
