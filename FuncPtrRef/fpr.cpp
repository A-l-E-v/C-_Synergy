#include <iostream>

using namespace std;

void F(int x)
{
    x++;
}

void F2(int &x)
{
    x++;
}
void F3(int *x)
{
    (*x)++;
}

void print_function (){
    cout << "\n===> Print Function has been called! <===\n";
}

void print_x (int x){
    cout << "\n===> Print X <===\n" << "x=" << x;
}

void another_print_function (){
    cout << "\n===> AAANNNOOOOTHHHEEERRR Print Function has been called! <===\n";
}


void any_function_call (void (*ptr)()){
    ptr();
}

void x_function_call (void (*ptr)(int x)){
    ptr(3);
}

int main()
{
    int x = 2;

    x = 2;
    F(x);
    cout << x;
    x = 2;
    F2(x);
    cout << x;
    x = 2;
    F3(&x);
    cout << x;

    int *ptr = new int(4);
    cout << ptr << ' ' << *ptr;
    int &y = *ptr;
    y = 745;
    cout << ptr << ' ' << *ptr;
    delete ptr;
    cout << ptr << ' ' << *ptr;

    cout << "\nPointers to functions\n";
    void (*fp)() = print_function;
    any_function_call(*fp);

    fp = another_print_function;
    any_function_call(fp);

    void (*p)(int) = print_x;
    x_function_call(p);
}