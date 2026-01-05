#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    string result = (marks >= 40) ? "Pass" : "Fail";
    cout << "result : " << result;
    return 0;
}