#include <iostream>

using namespace std;

int main()
{
    int a = 2056;
    int b = 35;

    cout << a << " " << b << endl;

    a = b - a;
    b = b - a;
    a = b + a;

    cout << a << " " << b << endl;

    a = b - a;
    b = b - a;
    a = b + a;
    cout << a << " " << b << endl;

    return 0;
}
