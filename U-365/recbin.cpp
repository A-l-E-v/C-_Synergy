// Напишите рекурсивную функцию, которая переводит число из десятичной системы
// в двоичную. Допускается использовать тип string для хранения двоичного числа.

// https://github.com/A-l-E-v/CPP_Synergy/blob/main/U-365/recbin.cpp

#include <iostream>

using namespace std;

string bin = "";
int x;

void convert(int x, string &bin)
{

    if (x <= 1)
    {
        bin += (char)(x + '0');
    }
    else
    {
        convert(x / 2, bin);
        if (x % 2)
        {
            bin += '1';
        }
        else
        {
            bin += '0';
        }
    }
}

int main()
{
    cout << "--- Перевод числа из десятичного в двоичное ---\n\n";
    cout << "Введите число: ";
    cin >> x;

    convert(x, bin);
    cout << "Число " << x << " в двоичной системе: ";
    cout << bin << endl;

    return 0;
}