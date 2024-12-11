/* Дано число R и массив размера N. Найти два различных элемента массива, сумма
которых наиболее близка к числу R, и вывести эти элементы в порядке возрастания
их индексов (то есть такой элемент AK, для которого величина |AK – R| является
минимальной). */

#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N, R;
    cout << "Введите размер массива N: ";
    cin >> N;

    int arr[100]; 
    cout << "Введите элементы массива: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << "Введите число R: ";
    cin >> R;

    int closeSum = 1000000; 
    int index1 = -1, index2 = -1;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int sum = arr[i] + arr[j];
            if (abs(sum - R) < abs(closeSum - R)) {
                closeSum = sum;
                index1 = i;
                index2 = j;
            }
        }
    }

    if (index1 != -1 && index2 != -1) {
        cout << "Элементы, сумма которых наиболее близка к R: "
            << arr[index1] << " и "
            << arr[index2] << " (индексы: "
            << index1 << ", " << index2 << ")" << endl;
    }
    else {
        cout << "Подходящие элементы не найдены." << endl;
    }

    return 0;
}
