/* Определить структуру с именем Сoat содержащую следующие поля: страна
производитель; размер шубы; материал, из которого изготовлен; цена. */

#include <stdio.h>
#include <locale.h>

struct Coat {
    char country[50];
    char manufacturer[50];
    char size[10];
    char material[50];
    float price;
};

int main() {
    setlocale(LC_ALL, "Russian");
    struct Coat myCoat;
    snprintf(myCoat.country, sizeof(myCoat.country), "Россия");
    snprintf(myCoat.manufacturer, sizeof(myCoat.manufacturer), "Производитель A");
    snprintf(myCoat.size, sizeof(myCoat.size), "L");
    snprintf(myCoat.material, sizeof(myCoat.material), "Шерсть");
    myCoat.price = 150000;
    printf("Страна производитель: %s\n", myCoat.country);
    printf("Производитель: %s\n", myCoat.manufacturer);
    printf("Размер: %s\n", myCoat.size);
    printf("Материал: %s\n", myCoat.material);
    printf("Цена: %.2f\n", myCoat.price);

    return 0;
}
