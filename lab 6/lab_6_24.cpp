#include <iostream>

using namespace std;

int main() {
    int number = 2; 

    do {
       
        if (number % 2 == 0 && number % 3 == 0) {
            cout << number << endl; 
        }
        number++; 
    } while (number <= 120); 

    return 0;
}

/* Напишите программу вывода всех четных и кратных 3 чисел в диапазоне от 2 до 120
включительно. */
