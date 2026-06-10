// Тема 1.2. Переменные, типы данных, const/auto

#include <iostream>
#include <numbers> // c++20 стандарт, хранит числа типа pi

int main() {   
    // Константы пи и скорости света
    double pi = std::numbers::pi; // у pi плавающая запятая по этому double
    int i = 299792458;

    // Вычисление длины радиуса
    int radius;
    std::cout << "Напиши число для вычисления длины радиуса : ";
    std::cin >> radius;
    
    auto result = 2 * pi * radius; // авто определения для результата
    std::cout << "Результат : " << result << std::endl;
}