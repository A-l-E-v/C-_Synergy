// Задание №8*

// Реализовать упрощённый вариант стека – структуры,
// где всегда доступен только последний добавленный элемент.
// Элементом стека должна быть структура, хранящая целое число и указатель на элемент.
// Количество элементов и сами элементы пользователь вводит с консоли,
// после чего они должны быть выведены в корректно порядке.
// Не забудьте в конце корректно удалить все элементы стека.

// Отправьте преподавателю код программы и скриншот консоли.

// https://github.com/A-l-E-v/CPP_Synergy/blob/main/U-379/stack.cpp

#include <iostream>

using namespace std;

// кол-во элементов стека
int stack_size;

class Stack
{
    int *value;   
    int position; 

public:
    Stack(int size); // конструктор
    ~Stack();        // деструктор

    void push(int); // добавить элемент
    int pop();      // извлечь элемент
};

// Конструктор и инициализации стека
Stack::Stack(int size)
{
    value = new int[size];
    position = -1;
}

// Деструктор и удаление стека
Stack::~Stack()
{
    delete[] value;
}

// Добавляем элемент
void Stack::push(int x)
{
    value[++position] = x;
}

// Извлекаем верхний элемент
int Stack::pop()
{
    return value[position--];
}

int main()
{
    int x;

    // ввод элементов стека
    cout << "Введите количество элементов стека: ";
    cin >> stack_size;

    Stack stack(stack_size);

    cout << "\n";

    for (size_t i = 0; i < stack_size; i++)
    {
        cout << "Введите " << i + 1 << " элемент стека: ";
        cin >> x;
        stack.push(x);
    }

    cout << "\nВывод элементов стека:\n";

    for (size_t i = 0; i < stack_size; i++)
    {

        cout << stack.pop() << " ";
    }

    cout << "\nВывод стека завершён!\n\n";
}