
#include <iostream>
#include <string>

using namespace std;

struct VUZ {
    string name;     
    int totalStudents;   
    int facultyCount;    
    double scholarshipAmount; 
};

int main() {
    setlocale(LC_ALL, "Russian");
    VUZ university;

    cout << "Введите название вуза: ";
    getline(cin, university.name);

    cout << "Введите общее количество студентов: ";
    cin >> university.totalStudents;

    cout << "Введите количество факультетов: ";
    cin >> university.facultyCount;

    cout << "Введите стипендию студента: ";
    cin >> university.scholarshipAmount;

    cout << "\nИнформация о вузе:\n";
    cout << "Название: " << university.name << "\n";
    cout << "Общее количество студентов: " << university.totalStudents << "\n";
    cout << "Количество факультетов: " << university.facultyCount << "\n";
    cout << "Стипендия студента: " << university.scholarshipAmount << "\n";

    return 0;
}
