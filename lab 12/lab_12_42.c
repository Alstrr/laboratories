/* Определить структуру с именем Сoat содержащую следующие поля: страна
производитель; размер шубы; материал, из которого изготовлен; цена. */

#include <stdio.h>
#include <locale.h>
struct Coat {
    char country[50];      
    char size[10];         
    char material[50];     
    float price;            
};

int main() {
    setlocale(LC_ALL, "Russian");
    struct Coat myCoat;
    printf("Введите страну производителя: ");
    fgets(myCoat.country, sizeof(myCoat.country), stdin);
    printf("Введите размер шубы: ");
    fgets(myCoat.size, sizeof(myCoat.size), stdin);
    printf("Введите материал: ");
    fgets(myCoat.material, sizeof(myCoat.material), stdin);
    printf("Введите цену: ");
    scanf_s("%f", &myCoat.price);
    printf("Страна: %s", myCoat.country);
    printf("Размер: %s", myCoat.size);
    printf("Материал: %s", myCoat.material);
    printf("Цена: %.2f\n", myCoat.price);

    return 0;
}
