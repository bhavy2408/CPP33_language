// virtual Function and Abstract class
#include <iostream>

using namespace std;

class Shape
{
public:
    virtual void calculate() = 0; // pure virtual class
};

class Circle : public Shape
{
    float radius;

public:
    void calculate()
    {
        cout << "Enter radius : ";
        cin >> radius;
        float area = 3.14 * radius * radius;
        cout << "Area of circle : " << area << endl;
    }
};

// class Triangle : public shape{
//     float base , height;

//     public:
//     Triangle(float b , float h){
//         base = b;
//         height = h;
//     }

//     void calculate(){
//         float area = 0.5 * base * height;
//         cout <<  "Area of Triangle : " << area << endl;
//     }
// };

// class Rectangle  : public shape{
//     float length , width;

//     public:
//     Rectangle(float l , float w){
//         length = l;
//         width = w;
//     }

//     void calculate(){
//         float area = length * width;
//         cout <<  "Area of Rectangle : " << area << endl;
//     }
// };

int main()
{

    int choice;
    // float rad, ba, he, le, wi;
    Shape *s;

    cout << "\n1. Area of Circle";
    cout << "\n2. Area of Triangle";
    cout << "\n3. Area of Rectangle";
    cout << "\n4. Exit";

    cout << "\nEnter Your Choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:

        s = new Circle();
        s->calculate();

        break;

        // case 2:

        //     cout << "Enter Length : ";
        //     cin >> le;

        //     cout << "Enter Width : ";
        //     cin >> wi;

        //     Triangle t(le , wi);
        //     t.calculate();

        //     break;

        // case 3:
        //      cout << "Enter base : ";
        //     cin >> ba;

        //     cout << "Enter Height : ";
        //     cin >> he;

        //     Rectangle r(ba , he);
        //     r.calculate();

        //     break;

    case 4:

        cout << "Exit.....";
        break;

    default:

        cout << "Invalid choice";
        break;
    }

    return 0;
}