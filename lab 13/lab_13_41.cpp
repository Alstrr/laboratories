/* Определить структуру с именем Hat содержащую следующие поля: страна
производитель; размер шапка; материал, из которого изготовлен; цена. */

#include <iostream>
#include <cstring>

using namespace std;
struct Hat {
    char country[100];      
    char size[10];         
    char material[100];    
    float price;           
};
int main() {
    setlocale(LC_ALL, "Russian");
    const int HAT_COUNT = 3; 
    Hat hats[HAT_COUNT];  
    for (int i = 0; i < HAT_COUNT; i++) {
        cout << "Введите данные о шапке " << i + 1 << ":" << endl;

        cout << "Страна производитель: ";
        cin >> hats[i].country;

        cout << "Размер шапки: ";
        cin >> hats[i].size;

        cout << "Материал: ";
        cin >> hats[i].material;

        cout << "Цена: ";
        cin >> hats[i].price;

        cout << endl; 
    }

    cout << "Данные о шапках:" << endl;
    for (int i = 0; i < HAT_COUNT; i++) {
        cout << "Шапка " << i + 1 << ":" << endl;
        cout << "Страна производитель: " << hats[i].country << endl;
        cout << "Размер шапки: " << hats[i].size << endl;
        cout << "Материал: " << hats[i].material << endl;
        cout << "Цена: " << hats[i].price << endl;
        cout << endl;
    }

    return 0;
}


