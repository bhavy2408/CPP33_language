/*1. Define a class named Rectangle with private attributes length and width. 
Implement public member functions to set and get the values of these attributes.
 Include a method to calculate the area of the rectangle. 
Create an object of the Rectangle class and demonstrate the functionality of the implemented methods.*/

#include<iostream>

using namespace std;

class Rectangle{
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

        cout << "Length : " << length << endl;
        cout << "Width : " << width << endl;

        int area = length * width;
        cout << "Area of Rectangle : "<< area << endl;
    }
};

int main(){
    Rectangle r;


    r.set();
    r.get();
    return 0;
}