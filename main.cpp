#include <iostream>

int main() {
    char buffer[10];  

    std::cout << "Введите строку: ";
    std::cin >> buffer; 

    std::cout << "Вы ввели: " << buffer << std::endl;
    return 0;
}
