#include <iostream>

using namespace std;

int main()
{
string food = "Pizza23adkvj;kj;sklafj;fdkj;akjsdfl";
string &meal = food;

cout << "food=" << food << " ref to food is &meal=" << &meal << " and meal=" << meal << " and sizeof &meal=" << sizeof (&meal) << " and sizeof meal=" << sizeof (meal) << " and sizeof food=" << sizeof (food) << " and sizeof &food=" << sizeof (&food)<< endl;

int x = 777;
int &var = x;

cout << "x=" << x << " ref to x is &var=" << &var << " and var=" << var << " and sizeof &x=" << sizeof (&x) << " and sizeof x=" << sizeof (x) << endl;




return 0;
}
