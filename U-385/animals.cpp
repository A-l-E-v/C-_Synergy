// Задание No2: Создайте базовый класс Животное с методами есть(), спать() и
// издаватьЗвук(). Затем создайте производные классы Кошка, Собака и Птица,
// которые наследуют от класса Животное и переопределяют метод издаватьЗвук() для
// каждого животного соответственно.

// https://github.com/A-l-E-v/CPP_Synergy/blob/main/U-385/animals.cpp

#include <iostream>

using namespace std;

class Animal
{
private:
    /* data */
public:
    Animal(/* args */) {}
    ~Animal() {}

    void eat()
    {
        cout << "Animal is eating" << endl;
    }

    void sleep()
    {
        cout << "Animal is sleeping" << endl;
    }

    virtual void makeSound()
    {
        cout << "Animal is making a sound" << endl;
    }
};

class Cat : public Animal
{

public:
    void makeSound() override
    {
        cout << "Cat is meowing" << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound() override
    {
        cout << "Dog is barking" << endl;
    }
};

class Bird : public Animal
{
public:
    void makeSound() override
    {
        cout << "Bird is chirping" << endl;
    }
};

int main()
{
    Cat a_cat;
    Dog a_dog;
    Bird a_bird;

    a_cat.makeSound();
    a_dog.makeSound();
    a_bird.makeSound();


    return 0;
}