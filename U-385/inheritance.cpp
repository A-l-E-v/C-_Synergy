#include <iostream>

using namespace std;

class Human
{


public:
    string name;

private:

public:
    Human()
    {
        name = "Human";
        cout << "Human() default constructor" << endl;
    };

    Human(const string &name) : name(name)
    {
        cout << "Human(string& name) constructor" << endl;
    }

    ~Human()
    {
        cout << "~Human() destructor" << endl;
    }

    void work()
    {
        cout << "void work() in Human class " << name << " works" << endl;
    }

    // friend string get_name(Human);

    string get_name()
    {
        return name;
    }
};

class Doctor : public Human
{

public:
    Doctor()
    {
        cout << "Doctor() default constructor" << endl;
    }

    Doctor(const string &name, int num) : Human(name), num_patients(num)
    {
        cout << "Doctor(string& name, int name) constructor" << endl;
    };
    ~Doctor()
    {
        cout << "~Doctor() destructor" << endl;
    }

     void work()
    {
        cout << "Doctor " << name << " works" << endl;
    }

public:
    int num_patients = 0;
};

// Human::Human(/* args */)
// {
// }

// Human::~Human()
// {
// }

int main()
{
    Human h;
    Human h_a("Sam");
    h.work();
    h_a.work();
    cout << "\nh.get_name(h) " << h.get_name() << endl;
    cout << "\nh_a.get_name(h_a) " << h_a.get_name() << endl;

    cout << "\nget_name(h) " << h.get_name() << endl;
    cout << "\nget_name(h_a) " << h_a.get_name() << endl;

    Doctor d;
    Doctor w("Who", 10);
    d.work();
    w.work();

    Human* k;
    k = new Human();
    cout << "k=" << k << endl;
    k->work();
    delete k;


}