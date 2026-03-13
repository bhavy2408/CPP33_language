#include<iostream>

using namespace std;

class student{
    public:
    string name;
    int roll;
    float gpa;

    student(string n="", int r=0 , g= 0.0){
        name =  n;
        roll = r;
        gpa = g;
    } 

    void display() const {
        cout << "Name : " << name <<endl;
        cout << "Roll : " << roll <<endl;
        cout << "GPA : " << gpa <<endl;
    }
    

}