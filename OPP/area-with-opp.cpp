#include <iostream>
using namespace std;

class shape{
    public: 
        void draws(){
            cout << "drawing shapes" << endl;
        }
};

class rectangle : public shape{
    public:
        float lenght, breath;
        void area(){
            cout << "enter lenght: ";
            cin >> lenght;
            cout << "enter breath: ";
            cin >> breath;
        }
};

class Circle : public shape {
    public: 
        float rad;
        const float PI = 3.14;
            void round (){
                cout << "enter radius: ";
                cin >> rad;
            }
};

class Square : public shape{
    public: 
        float side;
            void sides(){
                cout << "Enter sides: ";
                cin >> side;
            }
};

class result :public rectangle, public Circle , public Square{
    public: 
        void display(){
            cout << "area of the rectangle: " << lenght * breath << endl;
            cout << "Area of Circle = " << PI * rad * rad;
            cout << "Area of Square = " << side * side;
        }
};

int main(){
    result r;
    r.area();
    r.round();
    r.sides();
    r.display();
    return 0 ; 
    
}