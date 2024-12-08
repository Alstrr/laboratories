#include <stdio.h>

int main() {
  int N,k;
  printf("Введите два числа через пробел N и k:\n");
  scanf("%d %d", &N, &k);

    if (N < 0  || N >= 99) {
        printf("Ошибка.\n");
        return 1;
    }

    if (k < 1  || k > 5) {
        printf("Ошибка.\n");
        return 1;
    }

    int result = k * 1000 + N * 10 + k;

    printf("%d\n", result);

    return 0;

}
