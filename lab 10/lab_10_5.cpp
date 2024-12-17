/* В массиве из n чисел есть положительные и отрицательные элементы. Подсчитать
количество положительных и отрицательных элементов массива. */

#include <iostream>
using namespace std;

const int MAX = 100;

int main() {
    setlocale(LC_ALL, "Russian");
    int arr[MAX];
    int n;

    cout << "Введите количество элементов (не более " << MAX << "): ";
    cin >> n;

    if (n > MAX || n < 1) {
        cout << "Количество элементов должно быть от 1 до " << MAX << "!" << endl;
        return 1;
    }

    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int plusCount = 0; 
    int negCount = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            plusCount++;
        }
        else if (arr[i] < 0) {
            negCount++;
        }
    }

    cout << "Количество положительных элементов: " << plusCount << endl;
    cout << "Количество отрицательных элементов: " << negCount << endl;

    return 0;
}
