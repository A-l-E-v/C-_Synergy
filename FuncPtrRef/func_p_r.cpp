#include <iostream>
#include <functional>

using namespace std;

int calc(function<int(int, int)> f, int x, int y)
{
    return f(x, y);
}

int main()
{
    string oper;
    int x, y;
    cin >> oper >> x >> y;
    function<int(int, int)> f;
    if (oper == "sum")
        f = [](int x, int y)
        { return x + y; };
    else if (oper == "mul")
        f = [](int x, int y)
        { return x * y; };

    cout << calc(f, x, y);
}