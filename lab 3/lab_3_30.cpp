/* 30 Написать программу, которая по порядковому (атомному) номеру щелочного
металла (Li, Na, K, Rd, Cs) в Периодической системе химических элементов Д.И.
Менделеева, выводит цвет пламени этого металла. */

#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int atomicNumber;

    cout << "Введите порядковый (атомный) номер щелочного металла (3 для Li, 11 для Na, 19 для K, 37 для Rb, 55 для Cs): ";
    cin >> atomicNumber;

    switch (atomicNumber) {
    case 3:
        cout << "Литий (Li): Цвет пламени - красный." << endl;
        break;
    case 11:
        cout << "Натрий (Na): Цвет пламени - желтый." << endl;
        break;
    case 19:
        cout << "Калий (K): Цвет пламени - фиолетовый." << endl;
        break;
    case 37:
        cout << "Рубидий (Rb): Цвет пламени - малиновый." << endl;
        break;
    case 55:
        cout << "Цезий (Cs): Цвет пламени - синий." << endl;
        break;
    default:
        cout << "Некорректный атомный номер. Пожалуйста, попробуйте снова." << endl;
    }

    return 0;
}
