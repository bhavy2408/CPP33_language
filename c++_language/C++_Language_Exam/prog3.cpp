/*3. Define a base class `Shape` with private attributes `color` and `area`. 
Implement public member functions for setting and getting the color and calculating the area.
Derive two classes, `Circle` and `Rectangle`, from the `Shape` class. 
Implement methods to calculate the area specific to each shape.
Demonstrate abstraction by calling the area calculation methods for both `Circle` and `Rectangle`.
*/

#include<iostream>

using namespace std;

class Shape{
    private:
    string color;
    int area;

    public:
    Shape(){
        color ="";
        area=0;
    }
    Shape(float c , float a){
        color=c;
        area=a;
    }

    void setshape(){

        cout << "\nEnter Color : ";
        cin >> color;

        cout << "\nEnter Area : ";
        cin >> area;
    }
    

    void getshape(){
        cout << "Color : " << color << endl;
        cout << "Area of (Circle and Rectangle): " << area << endl;

        // int area = length * width;
        // cout << "Area of Rectangle : "<< area << endl;
    }
};

class Circle : public Shape{
    private:
    double pi=3.14;
    double radius;

    public:
    Circle(){
        radius=0.00;
    }
    Circle(double p , double r){
        pi = p;
        radius = r;
    }

    void set(){
        cout << "Enter Radius : ";
        cin >> radius; 
    }
    void get(){

        cout << "\nArea Of Circle\n" << endl;
  
        cout << "Area of Circle :-";
        cout << "Radius :  " << radius << endl;

        int area = pi * radius * radius;

        cout << "Area of Circle : " << area << endl;

    }
};

class Rectangle : public Shape{
    private:
   double length;
    double width;

    public:
     Rectangle(){
        length=0.00;
        width=0.00;
    }
    Rectangle(float l , float w){
        length=l;
        width=w;
    }
    void set(){

        cout << "\nEnter Length : ";
        cin >> length;

        cout << "\nEnter Width : ";
        cin >> width;
    }

    void get(){
        cout << "\nArea Of Rectangle\n" << endl;
        get();
        cout << "Length : " << length << endl;
        cout << "Width : " << width << endl;

        int area = length * width;
        cout << "Area of Rectangle : "<< area << endl;
    }
};

int main(){
    Rectangle r;
    Circle c;
    c.set();
    c.get();
    return 0;
}

