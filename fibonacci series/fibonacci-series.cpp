#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int j = 0, k = 1;  
    int t = 0;


    for (int i = 1; i <= n; ++i) {
        if(i == n) {
            cout << j; 
        } else {
            cout << j << ", ";
        }

        t = j + k;
        j = k;
        k = t;
    }
    return 0;
}