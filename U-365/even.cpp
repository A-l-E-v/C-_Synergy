// Пользователь вводит 2 целых числа, программа должна вывести “YES”, если хотя
// бы одно из чисел чётное, или “NO”, если все числа нечётные.

// https://github.com/A-l-E-v/CPP_Synergy/blob/main/U-365/even.cpp

#include <iostream>

using namespace std;

int main()
{

    int x,y;

cout << "--- Чётные и нечётные числа ---\n\n";

cout << "Введите первое целое число: ";
cin >> x;

cout << "Введите второе целое число: ";
cin >> y;

if ((x % 2 == 0) || (y % 2 == 0)) {
    cout << "YES\n";
    cout << "(Одно из чисел чётное)\n";
} else if ((x % 2 != 0) && (y % 2 != 0)) {
    cout << "NO\n";
    cout << "(Оба числа нечётные)\n";
}

}