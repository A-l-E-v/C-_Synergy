#include <iostream>
#include <vector>

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

    virtual ~Human()
    {
        cout << "~Human() destructor" << endl;
    }

    virtual void work()
    {
        cout << "void work() in Human class " << name << " works" << endl;
    }

    // friend string get_name(Human);

    string get_name()
    {
        return name;
    }
};

class Job
{

public:
    string job;
    int salary = 0;

private:
public:
    Job()
    {
        job = "job name";
        cout << "Job() default constructor" << endl;
    };

    Job(const string &job) : job(job)
    {
        cout << "Job(string& job) constructor" << endl;
    }

     Job(const int &salary) : salary(salary)
    {
        cout << "Job(string& job) constructor" << endl;
    }

    ~Job()
    {
        cout << "~Job() destructor" << endl;
    }


    string get_job()
    {
        return job;
    }
};

class Doctor : public Human, public Job
{

public:
    Doctor() : Human ("Doctor's name")
    {
        cout << "Doctor() default constructor" << endl;
    }

    Doctor(const string &name, int salary, int num) : Human(name), Job(salary), num_patients(num)
    {
        cout << "Doctor(string& name, int name) constructor" << endl;
    };
    ~Doctor()
    {
        cout << "~Doctor() destructor" << endl;
    }

    void work() override
    {
        cout << "Doctor {work() in Doctor class} " << name << " works " << salary << " $ salary." << endl;
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

    // Doctor d;
    // Doctor w("Who", 10, 1000);
    // d.work(10);
    // w.work(16);

    Human *k;
    k = new Human();
    cout << "k=" << k << endl;
    k->work();
    delete k;

    // Doctor *kd;
    // kd = new Doctor();
    // cout << "kd=" << kd << endl;
    // kd->work(32);
    // delete kd;


    vector<Human*> people;
// people.push_back(new Doctor());
// people.push_back(new Doctor("Who", 10, 2000));
// people.push_back(new Human());
// people.push_back(new Human("Liza"));

// people[0]->work();
// people[1]->work();
// people[2]->work();
// people[3]->work();

// for (size_t i = 0; i < 4; i++)
// {
// delete people[i];
// }


people.push_back(new Doctor("Kurpatov", 10, 2000));
people[0]->work();
delete people[0];


}
