/* В заданной матрице заменить отрицательные нечетные элементы нулями, положительные – единицами. */

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int rows, cols;

    cout << "Введите количество строк матрицы: ";
    cin >> rows;
    cout << "Введите количество столбцов матрицы: ";
    cin >> cols;

    int matrix[100][100];
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < 0 && matrix[i][j] % 2 != 0) {
                matrix[i][j] = 0; 
            } else if (matrix[i][j] > 0) {
                matrix[i][j] = 1;
            }
        }
    }

    // Вывод измененной матрицы
    cout << "Измененная матрица:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
