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
#include <fstream>
#include <iomanip>
#include <ctime>
#include <sstream>

namespace fs = std::filesystem;
using namespace std;

string path = "notes_dir";
string full_path;

string note_text = "";

map<int, string> notes_map;

int files = 1;
int total_files;

bool quit = false;
bool new_note = false;

int menu_entry = 1;

void create_note()
{

    cout << "\nВведите текст новой заметки!\n";
    cin.ignore();
    getline(cin, note_text);

    auto t = time(nullptr);
    auto tm = *localtime(&t);

    ostringstream oss;
    oss << put_time(&tm, "%d-%m-%Y@%H:%M:%S");
    auto date_time = oss.str();

    full_path = path + "/" + "Note_on_" + date_time;
    fstream file_w(full_path, ios_base::out);
    file_w << note_text << endl;
    file_w.close();
}

void show_note(int menu_entry)
{
    fstream note_file(notes_map[menu_entry], ios_base::in);
    if (note_file.is_open())
    {
        note_file.seekg(0, ios_base::beg);
        getline(note_file, note_text);
        cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
        cout << note_text << endl;
        cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
        note_file.close();
    }
}

int main()
{

    while (!quit)
    {
        cout << "Ваши заметки:\n";

        for (const auto &entry : fs::directory_iterator(path))
        {
            notes_map[files] = entry.path();
            files++;
        }
        total_files = files;
        files = 1;

        for (auto it : notes_map)
            cout << it.first << ": " << it.second << endl;

        cout << "\n 0 - новая заметка\n-1 - выход\n";

        cout << "\nВведите действие или номер заметки: ";

        cin >> menu_entry;

        switch (menu_entry)
        {
        case 0:
        {
            create_note();
            break;
        }
        case -1:
            cout << "\nВыходим из программы!\n";
            return 0;
            break;

        default:
            if (menu_entry <= total_files)
            {
                show_note(menu_entry);
                break;
            }
        }
    }
}
