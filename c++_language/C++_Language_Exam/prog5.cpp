//project 5
#include <iostream>

using namespace std;

class Animal{
    public:
    virtual void sound() =0;
    virtual void move()=0;
};

class Dog : public Animal{
    void sound(){
        cout << "Dog Bark" << endl; 
    }
    void move(){
        cout << "move on land \n" << endl;
    }
};

class Bird : public Animal{
    void sound(){
        cout << "Bird chiruping" << endl; 
    }
    void move(){
        cout << "fly " << endl;
    }
};

int main(){
    Animal* arr[2];

    Dog d;
    Bird b;

    arr[0]=&d;
    arr[1]=&b; 

    for(int i=0 ; i<2 ; i++){
        arr[i]->sound();
        arr[i]->move();
    }
    return 0;
}