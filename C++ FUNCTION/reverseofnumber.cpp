#include <iostream>
using namespace std;

int reverseNumber(int num) {
    num = 1234 ;
    int rev = 0;
    do {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    } while (num != 0);
    cout << "reversed number is: " << rev;
    return 0;
}

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    reverseNumber(number);
    return 0;
}