// Задание №7*

// Реализуйте программу «Заметки».
// В начале программы должен выводиться список доступных заметок –
// список текстовых файлов в директории программы.
// Пользователь может выбрать заметку и считать с неё информацию или создать новую заметку.

// Отправьте преподавателю код программы, скриншот консоли в процессе выполнения,
// скриншот директории с заметками и скриншот открытой заметки.

// https://github.com/A-l-E-v/CPP_Synergy/blob/main/U-379/notes.cpp

#include <iostream>
#include <filesystem>
#include <string>
#include <map>

namespace fs = std::filesystem;
using namespace std;

string path = "notes_dir";

map<int, string> notes_map;

int files = 1;

bool quit = false;
bool new_note = false;

int menu_entry = 1;

int main()
{
    while (!quit)
    {
        for (const auto &entry : fs::directory_iterator(path))
        {
            notes_map[files] = entry.path();
            files++;
        }
                files = 1;

       
            for (auto it : notes_map)
                cout << it.first << ": " << it.second << endl;

            cout << "\n 0 - новая заметка\n-1 - выход\n";

            cout << "\nВведите действие или номер заметки: ";

            cin >> menu_entry;


        switch (menu_entry)
        {
        case 0:
            cout << "\nСоздаём новую заметку!\n";
            break;

        case -1:
            cout << "\nВыходим из программы!\n";
            return 0;
            break;

        default:
            cout << "\nОткрываем заметку номер: " << menu_entry << "\n";
            break;
        }
    }
}
