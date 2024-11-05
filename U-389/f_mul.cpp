// Создать шаблонную функцию, которая умножает 2 числа.
// Тип возвращаемого значения должен быть double,
// функция должна корректно работать для основных
// числовых типов данных (int, double, float, long long).
// Протестируйте работы функции.
// Отправьте преподавателю код программы и скриншот консоли.

// https://github.com/A-l-E-v/CPP_Synergy/blob/main/U-389/f_mul.cpp

#include <iostream>

using namespace std;

template <typename T1, typename T2>

double f_mul(T1 x, T2 y)
{
    return x * y;
}

int main()
{
    int i_x = 3, i_y = 9;
    double d_x = 5.98765, d_y = 4.321;
    float f_x = 2.433f, f_y = 1.754f;
    long long ll_x = -1230480128048023, ll_y = 9223372036854775807;

    cout << typeid(i_x).name() << "*" << typeid(i_y).name() << ": " << i_x << "*"<< i_y << "=" << f_mul(i_x, i_y) <<endl;
    cout << typeid(d_x).name() << "*" << typeid(d_y).name() << ": " << d_x << "*"<< d_y << "=" << f_mul(d_x, d_y) <<endl;
    cout << typeid(f_x).name() << "*" << typeid(f_y).name() << ": " << f_x << "*"<< f_y << "=" << f_mul(f_x, f_y) <<endl;
    cout << typeid(ll_x).name() << "*" << typeid(ll_y).name() << ": " << ll_x << "*"<< ll_y << "=" << f_mul(ll_x, ll_y) <<endl;
    cout << endl;
    
}