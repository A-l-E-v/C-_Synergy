// Задание No6:Дополнить предыдущее задание.Создать вектор указателей на
// «Товар»,поместить туда экземпляр «Холодильника»и экземпляр «Чайника».
// Сделать так,чтобы при обходе вектора и вызове метода info()вызывались методы
// дочерних классов.Добавить к дочерним классам динамическое поле (указатель на
// int),хранящее информацию об объёме,который товар занимает на складе.В
// конструкторе выделить память под это поле и задать стартовое значение (очевидно,
// что холодильник должен занимать больше места,чем чайник).Корректно
// реализовать деструкторы для всей иерархии классов.Протестировать корректную
// работу классов в основной программе.Протестируйте работу методов.Отправьте
// преподавателю код программы и скриншот консоли.

#include <iostream>

using namespace std;

// Родительский класс Product
template <typename T>

class Product
{

private:
    int quantity;
    string name;
    T price;

public:
    Product(const string &name, T price = 0, int quantity = 0) : name(name), price(price), quantity(quantity)
    {
        cout << "Конструктор Product()\n";
    };

    // вывод общей информации о любом товаре
    virtual void info() const
    {

        cout << "Название: " << name << endl;
        printf("Стоимость единицы товара: %.2f руб.\n", price);
        cout << "Количество товара на складе: " << quantity << endl;
    }

    // Перегрузка оператора сложения
    Product &operator+=(int quantity)
    {

        this->quantity += quantity;

        return *this;
    }
};

// Дочерний класс наследуется от Product
template <typename T>

class Fridge : public Product<T>
{
private:
    string type;

public:
    Fridge(const string &name, T price, int quantity, const string &type) : Product<T>(name, price, quantity)
    {
        this->type = type;
        cout << "Конструктор Fridge()\n";
    }

    // Переопределение метода вывода дополнительной информации
    void info() const override
    {

        Product<T>::info();

        cout << "Тип холодильника: " << type << "\n\n";
    }
};

// Дочерний класс Kettle
template <typename T>

class Kettle : public Product<T>
{

private:
    string type;

public:
    Kettle(const string &name, T price, int quantity, const string &type) : Product<T>(name, price, quantity)
    {
        this->type = type;
        cout << "Конструктор Kettle()\n";
    }

    // Переопределение метода вывода дополнительной информации
    void info() const override
    {

        Product<T>::info();
        cout << "Тип чайника: " << type << "\n\n";
    }
};

int main()
{

    cout << "=== Подготовительный этап ===\n";
    Fridge fridge("Холодильник Beko", (float)39500.94, 5, "двухкамерный");
    Kettle kettle("Электрочайник Braun", (double)2500.58, 10, "с функцией термоса");
    cout << "=== Подготовительный этап завершён ===\n\n";

    fridge.info();
    kettle.info();

    cout << "=== На склад приехало 10 холодильников и 45 чайников ===\n\n";
    fridge += 10;
    kettle += 45;

    fridge.info();
    kettle.info();

    cout << "=== Завершение работы программы ===\n\n";

    return 0;
}
