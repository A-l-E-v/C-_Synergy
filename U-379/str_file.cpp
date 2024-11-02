// Задание №3

// Написать программу, которая создаёт текстовый файл, записывает в него строку,
// введённую пользователем в консоль. Затем программа должна закрыть файл для записи,
// открыть его для чтения, считать записанную строку и вывести её в консоль.

// Отправьте преподавателю код программы, скриншот консоли и скриншот открытого
// текстового файла.

// https://github.com/A-l-E-v/CPP_Synergy/blob/main/U-379/str_file.cpp

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str;

    fstream file_w("str_file.txt", ios_base::out);

    // файл открыт?
    if (file_w.is_open())
    {

        cout << "Файл str_file.txt открыт для записи!\n";
        cout << "Введите строку для записи в файл: ";

        getline(cin, str);
        cout << "Вы ввели: " << str << "\n";

        file_w << str << endl;

        file_w.close();

        cout << "Файл закрыт после записи.\n\n";
    }
    else
    {
        cout << "Ошибка открытия файла на запись.\n";
        return 1;
    }

    fstream file_r("str_file.txt", ios_base::in);

    // файл открыт?
    if (file_r.is_open())
    {

        cout << "Файл str_file.txt открыт для чтения!\n";
        cout << "Содержимое файла:\n";

        // читаем файл с самого начала
        file_r.seekg(0, ios_base::beg);

        // сохраняем в строку
        getline(file_r, str);

        cout << str << endl;

        file_r.close();

        cout << "Файл закрыт после чтения.\n";
    }
    else
    {
        cout << "Ошибка открытия файла на чтение.\n";
        return 1;
    }

    return 0;
}