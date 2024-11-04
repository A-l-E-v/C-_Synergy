#include <iostream>

using namespace std;

class Human
{
public:
    string name;
    int age = 0;

    void add_age(int x)
    {
        age += x;
    }

    void add_age()
    {
        age += 1;
    }

    Human& operator+(int val)
    {
        Human other = *this;
        other.age += val;
        
        return other;
    }

 Human& operator+(Human& other)
    {
        Human other_2 = *this;
        other_2.age += other.age;
        
        return other_2;
    }

    friend Human& operator+(int val, Human& h);
};

Human& operator+(int val, Human &h)
{
    Human other = h;
    other.age += val;
    return other;
}

int main()
{

    // Human h = {};
    // h.name = "Alex";
    // h.age = 22;
    // cout << h.name << " " << h.age << endl;
    // h.add_age();
    // cout << h.name << " " << h.age << endl;
    // h.add_age(22);
    // cout << h.name << " " << h.age << endl;
    cout << "Overloading" << endl;

    Human h1 = {"Alex", 50};
        Human h2 = {"Maria", 20};


    h1 =  h1 +h2;
    cout << h1.age << endl;

    cout << h1.name << " " << h1.age << endl;
}