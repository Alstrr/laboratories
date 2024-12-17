/* Определить структуру с именем Hat содержащую следующие поля: страна
производитель; размер шапка; материал, из которого изготовлен; цена. */


#include <iostream>
#include <string>

using namespace std;

struct Hat {
    string country;   
    string size;       
    string material;  
    double price;     
};

int main() {
    setlocale(LC_ALL, "Russian");
    Hat myHat;

    cout << "Введите страну производитель: ";
    getline(cin, myHat.country);

    cout << "Введите размер шапки: ";
    getline(cin, myHat.size);

    cout << "Введите материал шапки: ";
    getline(cin, myHat.material);

    cout << "Введите цену шапки: ";
    cin >> myHat.price;

    cout << "\nИнформация о шапке:\n";
    cout << "Страна производитель: " << myHat.country << "\n";
    cout << "Размер шапки: " << myHat.size << "\n";
    cout << "Материал: " << myHat.material << "\n";
    cout << "Цена: " << myHat.price << "\n";

    return 0;
}
