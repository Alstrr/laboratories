/*В массиве из n чисел есть положительные и отрицательные элементы. Подсчитать
количество положительных и отрицательных элементов массива. */


#include <stdio.h>
#include <locale.h>

#define maxsize 100 

int main() {
    setlocale(LC_ALL, "Russian");
    int n;

    printf("Введите количество элементов массива (n): ");
    scanf_s("%d", &n);

   
    if (n <= 0 || n > maxsize) {
        printf("Количество элементов должно быть положительным и не превышать %d.\n", maxsize);
        return 1; 
    }

    int arr[maxsize];

    printf("Введите элементы массива:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }

    int plus_c = 0; 
    int minus_c = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            plus_c++;
        }
        else if (arr[i] < 0) {
            minus_c++;
        }
    }

    printf("Количество положительных элементов: %d\n", plus_c);
    printf("Количество отрицательных элементов: %d\n", minus_c);

    return 0;
}
