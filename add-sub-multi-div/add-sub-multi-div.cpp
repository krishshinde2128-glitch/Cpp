#include <iostream>
using namespace std;

int main() {
    int a,b,c,d,sum,multiple,subtract,divide;

    cout << "Enter two integers: ";
    cin >> a;

    cout << "Please enter the second integer: ";
    cin >> b;
    sum = a + b;

    cout << "sum = " << sum << endl;

    cout << "enter third integer: ";
    cin >> c;

    cout << "enter fourth integer: ";
    cin >> d;
    multiple = c * d;
    cout << "multiple = " << multiple << endl;
    subtract = c - d;
    cout << "subtract = " << subtract << endl;
    divide = c / d;
    cout << "divide = " << divide << endl;
    return 0;  
}