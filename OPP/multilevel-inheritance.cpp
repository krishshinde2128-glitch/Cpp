#include <iostream>
using namespace std;

class student {
    public:
        int roll;
};

class marks: public student{
    public:
    int m1,m2;
    void show(){
        cout<<"enter your marks: ";
        cin>>m1;
        cout<<"enter your marks: ";
        cin>>m2;
    }
};

class result : public marks {
    public:
        void display() {
            cout << "Roll No: " << roll << endl;
            cout << "total marks: " << m1 + m2 << endl;
        }
};

int main (){
    result r;
    cout<<"enter your roll no. = ";
    cin >> r.roll;
    r.show();
    r.display();
    return 0;
}