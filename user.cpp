#include <iostream>
using namespace std;
int main() {
 int a,b;

    cout << "Enter two integers: ";
    cin >> a;
    cout << "Please enter the second integer: ";
    cin >> b;
    if (a>b)
    {
        cout << a << " is the bigger number" << endl;
    };
    if (b>a)
    {
        cout << b << " is the bigger number" << endl;
    };
    if (a==b)
    {
        cout << "Both numbers are equal" << endl;
    };
    return 0;
}