
/* Написать программу, которая по температуре кипения газообразных и жидких
простых веществ, выводит название этого вещества (рассмотреть 10 веществ).*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    float temperature;

    printf("Введите температуру кипения в градусах Цельсия: ");
    scanf("%f", &temperature);

    switch ((int)(temperature * 10)) { //чтобы бфли целые числа
        case 1000: // 100.0
            printf("Вещество: Вода\n");
            break;
        case 783: // 78.3
            printf("Вещество: Этанол\n");
            break;
        case 800: // 80.0
            printf("Вещество: Бензин\n");
            break;
        case -1615: // -161.5
            printf("Вещество: Метан\n");
            break;
        case 560: // 56.0
            printf("Вещество: Ацетон\n");
            break;
        case -420: // -42.0
            printf("Вещество: Газовый пропан\n");
            break;
        case 346: // 34.6
            printf("Вещество: Эфир\n");
            break;
        case 396: // 39.6
            printf("Вещество: Дихлорометан\n");
            break;
        case 2900: // 290.0
            printf("Вещество: Глицерин\n");
            break;
        case 3000: // 300.0
            printf("Вещество: Масло\n");
            break;
        default:
            printf("Нет вещества с такой температурой кипения.\n");
    }

    return 0;
}
