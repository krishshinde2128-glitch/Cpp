#include <iostream>
using namespace std;

int fibonachi(int n) {
    if(n<=1)
        return n;
    return fibonachi(n-1) + fibonachi(n-2);
}

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    for(int i=1; i<=number; i++){
        fibonachi(i);
    return 0;
    }
}