// Задание No3: Создайте вектор целых чисел и заполните его случайными
// значениями. Затем отсортируйте вектор в порядке возрастания и выведите его
// содержимое на экран.

// https://github.com/A-l-E-v/CPP_Synergy/tree/main/U-387

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(0));

    vector<int> numbers;

    for (size_t i = 0; i < 10; i++)
    {
        numbers.push_back(rand() % 100);
        sort(numbers.begin(), numbers.end());
    }

    for (int number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;
}