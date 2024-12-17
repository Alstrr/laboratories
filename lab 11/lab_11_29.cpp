/* Дана целочисленная матрица размера × . Найти количество ее строк, все
элементы которых различны. */

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n, m;
    cout << "Введите количество строк (n) и столбцов (m): ";
    cin >> n >> m;

    int matrix[100][100];
    cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        int Dup = 0;
        for (int j = 0; j < m; j++) {
            for (int k = j + 1; k < m; k++) {
                if (matrix[i][j] == matrix[i][k]) {
                    Dup = 1;
                    break;
                }
            }
            if (Dup) break;
        }
        count += (Dup == 0);
    }

    cout << "Количество строк с уникальными элементами: " << count << endl;

    return 0;
}
