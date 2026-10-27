#include <iostream>

int main() {
    int month; // номер месяца, который введёт пользователь
    // ввод числа и чтение номера месяца
    std::cout << "Vvedite nomer mesyaca (1-12): ";
    std::cin >> month;

    switch (month) {
    case 1:  std::cout << "Yanvar'" << std::endl; break;
    case 2:  std::cout << "Fevral'" << std::endl; break;
    case 3:  std::cout << "Mart" << std::endl; break;
    case 4:  std::cout << "Aprel'" << std::endl; break;
    case 5:  std::cout << "Maj" << std::endl; break;
    case 6:  std::cout << "Iyun'" << std::endl; break;
    case 7:  std::cout << "Iyul'" << std::endl; break;
    case 8:  std::cout << "Avgust" << std::endl; break;
    case 9:  std::cout << "Sentyabr'" << std::endl; break;
    case 10: std::cout << "Oktyabr'" << std::endl; break;
    case 11: std::cout << "Noyabr'" << std::endl; break;
    case 12: std::cout << "Dekabr'" << std::endl; break;
    // сюда попадаем, если month не совпал ни с одним числом
    default: 
        std::cout << "Oshibka: mesyac dolzhen byt' ot 1 do 12" << std::endl;
        break;
    }
    return 0;
}
