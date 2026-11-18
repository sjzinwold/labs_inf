// Лабораторная работа 5. Средний уровень, вариант 2
#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a, b, h;

    std::cout << "Табуляция функции y = cos(x)" << std::endl;
    std::cout << "Введите a, b, h: ";
    std::cin >> a >> b >> h;

    // Проверка корректности ввода
    if (a > b || h <= 0) {
        std::cout << "Ошибка ввода!" << std::endl;
        return 1;
    }

    // Минимум и максимум инициализируем первым значением функции:
    // любое «магическое» начальное значение могло бы не попасть в диапазон значений cos(x).
    double xMin = a, xMax = a;
    double minY = std::cos(a), maxY = std::cos(a);

    // Шапка таблицы
    std::cout << "+------------+------------+" << std::endl;
    std::cout << "|     x      |   cos(x)   |" << std::endl;
    std::cout << "+------------+------------+" << std::endl;
    std::cout << std::fixed << std::setprecision(4);

    // Цикл табуляции. b + 1e-9 компенсирует погрешность double
    for (double x = a; x <= b + 1e-9; x += h) {
        double y = std::cos(x);
        std::cout << "|" << std::setw(12) << x
            << " |" << std::setw(12) << y << " |" << std::endl;

        // Обновление минимума
        if (y < minY) { minY = y; xMin = x; }
        // Обновление максимума
        if (y > maxY) { maxY = y; xMax = x; }
    }
    std::cout << "+------------+------------+" << std::endl;

    // Вывод результатов поиска
    std::cout << "\nРезультаты поиска:" << std::endl;
    std::cout << "Минимум: cos(" << xMin << ") = " << minY << std::endl;
    std::cout << "Максимум: cos(" << xMax << ") = " << maxY << std::endl;
    return 0;
}