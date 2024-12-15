
/* В матрице A( N, M) вычислить две суммы элементов, расположенных ниже и выше
главной диагонали.*/

#include <stdio.h>
#include <locale.h>

#define MAX 100

int main() {
    setlocale(LC_ALL, "Russian");
    int A[MAX][MAX];
    int N, M;
    int sumup = 0, sumlow = 0;

    printf("Введите количество строк (N): ");
    scanf("%d", &N);
    printf("Введите количество столбцов (M): ");
    scanf("%d", &M);

    printf("Введите элементы матрицы:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i < j) {
                sumup += A[i][j];
            } else if (i > j) {
                sumlow += A[i][j]; 
            }
        }
    }

    printf("Сумма элементов выше главной диагонали: %d\n", sumup);
    printf("Сумма элементов ниже главной диагонали: %d\n", sumlow);

    return 0;
}
