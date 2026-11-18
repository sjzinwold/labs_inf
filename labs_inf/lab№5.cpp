// Лабораторная работа 5. Базовый уровень, вариант 2
#include <iostream>
#include <windows.h>
#include <iomanip>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a, b, h;  // a - начало интервала, b - конец, h - шаг

    std::cout << "Введите начало интервала a: ";
    std::cin >> a;
    std::cout << "Введите конец интервала b: ";
    std::cin >> b;
    std::cout << "Введите шаг h: ";
    std::cin >> h;

    // Проверка корректности ввода
    if (a > b) {
        std::cout << "Ошибка: начало интервала не может быть больше конца!"
            << std::endl;
        return 1;
    }
    if (h <= 0) {
        std::cout << "Ошибка: шаг должен быть положительным!" << std::endl;
        return 1;
    }

    // Шапка таблицы
    std::cout << "+------------+------------+" << std::endl;
    std::cout << "|     x      | y=x^2-2x+1 |" << std::endl;
    std::cout << "+------------+------------+" << std::endl;
    std::cout << std::fixed << std::setprecision(4);

    // Цикл табуляции: for подходит, т.к. число итераций известно.
    // Условие x <= b + 1e-9 компенсирует погрешность double, чтобы последняя точка x = b гарантированно попала в таблицу.
    for (double x = a; x <= b + 1e-9; x += h) {
        double y = x * x - 2.0 * x + 1.0;   // значение функции
        std::cout << "|" << std::setw(12) << x
            << " |" << std::setw(12) << y << " |" << std::endl;
    }
    std::cout << "+------------+------------+" << std::endl;
    return 0;
}