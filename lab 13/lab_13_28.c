/* Определить структуру с именем Street содержащую следующие поля: название
улицы; протяженность; количество домов; количество перекрестов. */


struct Street {
    char name[50];
    float length; // протяженность в километрах
    int houseCount; // количество домов
    int intersectionCount; // количество перекрестков
};

int main() {
    setlocale(LC_ALL, "Russian");
    struct Street streets[3]; // массив из 3-х улиц

    // Пример заполнения полей структуры
    snprintf(streets[0].name, sizeof(streets[0].name), "Улица Орджиникидзе");
    streets[0].length = 4.5;
    streets[0].houseCount = 70;
    streets[0].intersectionCount = 10;

    snprintf(streets[1].name, sizeof(streets[1].name), "Улица Миклухо-Маклая");
    streets[1].length = 5.8;
    streets[1].houseCount = 65;
    streets[1].intersectionCount = 5;

    snprintf(streets[2].name, sizeof(streets[2].name), "Улица Шаболовка");
    streets[2].length = 6.0;
    streets[2].houseCount = 102;
    streets[2].intersectionCount = 12;

    // Вывод информации об улицах
    for (int i = 0; i < 3; i++) {
        printf("Улица: %s\n", streets[i].name);
        printf("Протяженность: %.2f км\n", streets[i].length);
        printf("Количество домов: %d\n", streets[i].houseCount);
        printf("Количество перекрестков: %d\n\n", streets[i].intersectionCount);
    }

    return 0;
}
