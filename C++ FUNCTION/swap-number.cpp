#include <iostream>
using namespace std;

int swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    return 0;
}

int main(){
    int a, b;
    cout << "Enter a numbers: ";
    cin >> a;
    cout << "Enter b numbers: ";
    cin >> b;
    cout << "Before swapping: " << a << " " << b << endl;
    swap(a, b);
    cout << "After swapping: " << a << " " << b << endl;
    return 0;
}
