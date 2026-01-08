#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello, ";
    string s2 = "World!";
    string s3;
    // concatenation using +
    s3 = s1 + "  " + s2;
    cout << "concatination of two strings: " << s3 << endl;
    // append using +=
    s1 += s2;
    cout << "after += operator: " << s1 << endl;
    // comarison using ==
    if (s1 == s3) {
        cout << "s1 and s3 are equal" << endl;
    } else {
        cout << "s1 and s3 are not equal" << endl;
    }
    // comparison using <
    if (s1 < s2) {
        cout << s1 << " comes before " << s2 << endl;
    } else {
        cout << s1 << " comes after " << s2 << endl;
    }
    // accessing characters using []
    cout << "First character of s2: " << s2[0] << endl;
    
    return 0;
}
