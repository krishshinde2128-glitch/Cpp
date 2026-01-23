#include <iostream>
using namespace std;


class employee{
    public:
        int EmID;
        void showID()
        {
            cout << "Employee ID: " << EmID << endl;
        }
};

class Salary : public employee{
    public:
        int Salary;
        void showSalary()
        {
        cout << "Salary: "<< Salary<<endl;
        }

};

int main(){
    Salary s;

    s.EmID = 2322;
    s.Salary = 1000;

    s.showID();
    s.showSalary();
    
    return 0;
}

