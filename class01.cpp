#include <iostream>

using namespace std;
//cout << "Hello World" << endl;

int main()
{
    int a, b;
    a = 5;
    b = 1;
    cout << a << " - " << b << " = ";
    int value = 0;
    while (a > b) {
        b++;
        value++;
    }
    cout << value;
}