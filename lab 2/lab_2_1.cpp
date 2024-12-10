/* На числовой оси расположены точки: A, B, C, D. Определить, какая из точек B, C или
D расположена ближе к A, и вывести на экран эту точку и расстояние до точки A. */

#include <iostream>
#include <cmath> 
#include <locale> 

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian"); 

    double A, B, C, D;
    cout << "Введите координаты точки A: ";
    cin >> A;
    cout << "Введите координаты точки B: ";
    cin >> B;
    cout << "Введите координаты точки C: ";
    cin >> C;
    cout << "Введите координаты точки D: ";
    cin >> D;

    double distB = abs(B - A);
    double distC = abs(C - A);
    double distD = abs(D - A);

    if (distB <= distC && distB <= distD) {
        cout << "Точка B ближе всего к A. Расстояние: " << distB << endl;
    }
    else if (distC <= distB && distC <= distD) {
        cout << "Точка C ближе всего к A. Расстояние: " << distC << endl;
    }
    else {
        cout << "Точка D ближе всего к A. Расстояние: " << distD << endl;
    }

    return 0;
}
