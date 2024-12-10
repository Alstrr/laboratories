
/* Даны натуральные числа от 20 до 50 Напечатать те из них, которые делятся на 3, но
не делятся на 5 */

#include <iostream>

using namespace std;

int main() {
    for (int i = 20; i <= 50; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
