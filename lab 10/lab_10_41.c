/* Дан массив размера N. Найти два соседних элемента, сумма которых максимальна, и
вывести эти элементы в порядке возрастания их индексов. */


#include <stdio.h>
#include <locale.h>

#define MAX 100 

void maxsum(int arr[], int n) {
    if (n < 2) {
        printf("Массив слишком мал, чтобы иметь соседние элементы.\n");
        return;
    }

    int maxSum = arr[0] + arr[1];
    int index1 = 0;
    int index2 = 1;

    for (int i = 1; i < n - 1; i++) {
        int curSum = arr[i] + arr[i + 1];
        if (curSum > maxSum) {
            maxSum = curSum;
            index1 = i;
            index2 = i + 1;
        }
    }

    printf("Максимальная сумма соседних элементов: %d\n", maxSum);
    printf("Соседние элементы: %d и %d\n", arr[index1], arr[index2]);
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n;

    printf("Введите размер массива N (не более %d): ", MAX);
    scanf_s("%d", &n);

    if (n > MAX) {
        printf("Размер массива превышает максимальный размер.\n");
        return 1;
    }

    int arr[MAX];
    printf("Введите элементы массива:\n");

    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }

    maxsum(arr, n);

    return 0;
}
