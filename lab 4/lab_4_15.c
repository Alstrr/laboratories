/*Ввести с клавиатуры 10 чисел. Если квадрат числа меньше 100, напечатать число и
его квадрат. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int number;
    printf("Введите 10 чисел:\n");
    for (int i = 0; i < 10; i++) {
        printf("Число %d: ", i + 1);
        scanf("%d", &number);
        
        int square = number * number; 
        if (square < 100) {
            printf("Число: %d, Квадрат: %d\n", number, square);
        }
    }

    return 0;
}
