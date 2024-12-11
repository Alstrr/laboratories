/* Пифагоровыми называются тройки натуральных чисел a, b, c удовлетворяющие
условию a**2 + b**2 = c**2 Например, пифагоровой является тройка чисел 6, 8, 10
Найдите все тройки пифагоровых чисел, не превышающих 25 */


#include <iostream>

using namespace std;

int main() {
    int a = 1;

    while (a <= 25) {
        int b = a + 1;
        while (b <= 25) {
            int c = b + 1;
            while (c <= 25) {
                if (a * a + b * b == c * c) {
                    cout << a << ", " << b << ", " << c << endl;
                }
                c++;
            }
            b++;
        }
        a++;
    }
    return 0;
}