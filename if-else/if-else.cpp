#include <iostream>
using namespace std;

int main() {
   int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90 && marks <= 100) {
        cout << "grade: A" << endl;
    } else if (marks >= 70 && marks < 90) {
        cout << "grade: B" << endl;
    } else if (marks >= 50 && marks < 70) {
        cout << "grade: C" << endl;
    } else if (marks >= 0 && marks < 50) {
        cout << "grade: F" << endl;
    }
    return 0;
}