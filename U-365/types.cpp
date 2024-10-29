// Напишите программу, которая поочерёдно запрашивает у пользователя
// переменные различных типов, после чего выводит их все через пробел обратно в
// консоль. Обязательно использовать такие типы данных как int, double, char, bool,
// string. То есть, например, программа просит пользователя “Enter int: “, затем “Enter
// double: “ и так далее, а в конце выводит “You entered: 5 3.14 random_string “ и так
// далее.

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int int_x = 0;
    double double_x = 0;
    char char_x = ' ';
    bool bool_x = true;
    string string_x = "";

    cout << "---Переменные различных типов ---\n\n";
    cout << "Введите переменную типа int: ";
    cin >> int_x;

    cout << "Введите переменную типа double: ";
    cin >> double_x;

    cout << "Введите переменную типа char: ";
    cin >> char_x;

    cout << "Введите переменную типа bool (0|1): ";
    cin >> bool_x;

    cout << "Введите переменную типа string: ";
    cin >> string_x;
    cout << "\n";

    cout << "Вы ввели: " << int_x << " " << double_x << " " << char_x << " " << bool_x << " " << string_x << "\n";

    return 0;
}
