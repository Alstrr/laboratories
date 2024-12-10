#include <stdio.h>
#include <math.h>
#include <locale.h>

/*Дано число N<99. Дописать в начало и в конец числа цифру k. (диапазон возможных 
k, например, от 1 до 5).*/

int main() {
    setlocale(LC_ALL, "Russian");
    int N, k;
    printf("Enter N and k: ");
    scanf("%d %d", &N, &k);
    int result = k * 1000 + N * 10 + k;

    printf("\nResult: %d", result);
    return 0;
}
