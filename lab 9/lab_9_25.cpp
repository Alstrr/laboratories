
/* Имеется убывающий ряд чисел: 1/2, 1/3, 1/4, 1/5,... Найти сумму всех элементов ряда
с точностью Z (т.е. если очередной элемент ряда стал меньше Z, то его суммировать
уже не нужно). */

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double sum = 0.0;
    double Z;

    cout << "Введите значение точности Z: ";
    cin >> Z;

    for (int n = 2; ; n++) {
        double term = 1.0 / n;
        if (term < Z) {
            break;
        }
        sum += term;
    }

    cout << "Сумма ряда: " << sum << endl;
    return 0;
}
