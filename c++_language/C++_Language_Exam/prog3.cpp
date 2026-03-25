/*3. Define a base class `Shape` with private attributes `color` and `area`. 
Implement public member functions for setting and getting the color and calculating the area.
Derive two classes, `Circle` and `Rectangle`, from the `Shape` class. 
Implement methods to calculate the area specific to each shape.
Demonstrate abstraction by calling the area calculation methods for both `Circle` and `Rectangle`.
*/

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

   
    virtual void calculateArea() = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    void setCircle(double r) {
        radius = r;
    }

    void calculateArea() {
        double a = 3.14 * radius * radius;
        setArea(a);
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    void setRectangle(double l, double w) {
        length = l;
        width = w;
    }

    void calculateArea() {
        double a = length * width;
        setArea(a);
    }
};

int main() {
    Circle c;
    Rectangle r;

    
    cout << "\nCircle :-" << endl;
    c.setColor("Red");
    c.setCircle(5);
    c.calculateArea();
    cout << "Color: " << c.getColor() << endl;
    cout << "Area: " << c.getArea() << endl;

    
    cout << "\nRectangle :-" << endl;
    r.setColor("Blue");
    r.setRectangle(4, 5);
    r.calculateArea();
    cout << "Color: " << r.getColor() << endl;
    cout << "Area: " << r.getArea() << endl;

    return 0;
}