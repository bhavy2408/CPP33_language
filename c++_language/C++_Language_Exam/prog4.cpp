// project 4
#include<iostream>
using namespace std;

class Shape {
private:
    string color;
    double area;

public:
    void setColor(string c) {
        color = c;
    }

    string getColor() {
        return color;
    }

    void setArea(double a) {
        area = a;
    }

    double getArea() {
        return area;
    }

    virtual void display(){
        cout << "This is a shape " << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }
    void display(){
        cout << "Radius : " << radius << endl;
        double a= 3.14 * radius * radius;
        cout << "Area of Circle : "  << a << endl;
    }
    
};

class Rectangle : public Shape {
private:
    double length; 
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void display() {
        cout << "Length : " << length << endl;
        cout << "Width : " << width << endl;
        double a = length * width;
        cout << "Area of Rectangle : "<< a << endl;
    }
};

int main() {
    Shape* arr[2];   

     Circle c(5);
    Rectangle r(4, 6);

    arr[0] = &c;   
    arr[1] = &r;   

    
    for(int i = 0; i < 2; i++) {
        arr[i]->display();   
        cout << endl;
    }

    return 0;
}