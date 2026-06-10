// Тема 1.3. Операторы и арифметика

#include <iostream>
#include <string>

// Отдельная функция для вычисления
int calc_sum(int o, int t, std::string op) {
    // можно не указывать много скобок а сделать красивее
    if (op == "*") return o * t;
    if (op == "/") return o / t;
    if (op == "-") return o - t;
    if (op == "+") return o + t;
    return 0;
}

int main() {
    // Обьявляем переменные
    int number_one; 
    std::string operator_calc; 
    int number_two;

    // Опрашиваем пользователя
    std::cout << "Введи число 1 : ";
    std::cin >> number_one;
    std::cout << "Введи число 2 : ";
    std::cin >> number_two;
    std::cout << "Введи оператор : ";
    std::cin >> operator_calc;

    // Выдаем результат
    int result = calc_sum(number_one, number_two, operator_calc);
    std::cout << "Результат : " << result << std::endl;

    return 0;
}