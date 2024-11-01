#include <iostream>
#include <functional>

using namespace std;

struct Animal
{
    int legs;
    string name;
};

void set_param(void (*ptr)(Animal*), Animal* a){
ptr(a);
}

int main()
{
    Animal cat = {4, "Mysya"};
    // Animal* ptr = &cat;

    string param = "name";
    // function<void(Animal*)> f;

    void (*ptr)(Animal*) = nullptr;

    if (param == "name")
    // f = [](Animal* a){
        ptr = [](Animal* a){

        a->name="Dusya";
    };
    else if (param == "legs")
    // f = [](Animal* a){
        ptr = [](Animal* a){

        a->legs = +1;
    };
    set_param(ptr, &cat);

    cout << cat.name << " " << cat.legs << endl;
}