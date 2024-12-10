/* Подсчитать, сколько раз встречается в заданной целочисленной матрице A( N, M)
максимальное по величине число. */

#include <stdio.h>
#include <locale.h>

#define MAX 100 

int main() {
    setlocale(LC_ALL, "Russian");
    int A[MAX][MAX];
    int N, M;

    printf("Введите количество строк (N): ");
    scanf_s("%d", &N);
    printf("Введите количество столбцов (M): ");
    scanf_s("%d", &M);

    if (N <= 0 || N > MAX || M <= 0 || M > MAX) {
        printf("Размеры матрицы должны быть положительными и не превышать %d.\n", MAX);
        return 1;
    }

    printf("Введите элементы матрицы:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf_s("%d", &A[i][j]);
        }
    }
    int max = A[0][0]; 
    int count = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (A[i][j] > max) {
                max = A[i][j];
                count = 1; 
            }
            else if (A[i][j] == max) {
                count++; 
            }
        }
    }

    printf("Максимальное число: %d\n", max);
    printf("Количество вхождений максимального числа: %d\n", count);

    return 0;
}
