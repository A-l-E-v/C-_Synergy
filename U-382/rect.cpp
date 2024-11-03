// Задание No1: Создайте класс Rectangle с двумя закрытыми полями width и height, а
// также методами для вычисления площади и периметра прямоугольника.

// https://github.com/A-l-E-v/CPP_Synergy/blob/main/U-382/rect.cpp

#include <iostream>

using namespace std;

class Rectangle
{
private:
    double h; // высота
    double w; // ширина

public:
    // конструктор
    Rectangle(double height, double width)
    {
        h = height;
        w = width;
    }

    double Area()
    {
        return h * w;
    }

    double Perimeter()
    {
        return 2 * (w + h);
    }
};

int main()
{
    double width, height;
    cout << "\n\n --- Периметр и площадь прямоугольника ---\n\n";
    cout << "\nВведите высоту прямоугольника: ";
    cin >> height;

    cout << "Введите ширину прямоугольника: ";
    cin >> width;

    Rectangle rect(height, width);

    cout << "\nПериметр прямоугольника: " << rect.Perimeter() << endl;
    cout << "\nПлощадь прямоугольника: " << rect.Area() << endl;
}
