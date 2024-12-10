
/* Вычислить длину биссектрисы треугольника, если известны длины его сторон.
Вычислить для треугольников разных типов (разносторонний, равнобедренный и
остроугольный)  */


#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b, c; 
    cout << "Введите длины сторон треугольника (a, b, c): ";
    cin >> a >> b >> c;

    string type;
    if (a == b && b == c) {
        type = "равносторонний";
    }
    else if (a == b || a == c || b == c) {
        type = "равнобедренный";
    }
    else {
        type = "разносторонний";
    }

    double angleA = acos((b * b + c * c - a * a) / (2 * b * c));

    double bisectorLength = (2 * b * c * cos(angleA / 2)) / (b + c);

    cout << "Тип треугольника: " << type << endl;
    cout << "Длина биссектрисы (к стороне a): " << bisectorLength << endl;

    return 0;
}
