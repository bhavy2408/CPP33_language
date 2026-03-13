#include<iostream>

using namespace std;

class Animal{
    public:
    void sound(){
        cout << "meow meow"<<endl; 
    }
};

class dog : public Animal{
    public:
    void sound(){
        cout << "bhow bhow"<<endl;
    }
};

int main(){
    Animal a;
    dog d;

    cout << "parents table sound : ";
    a.sound();
    cout << "child  table sound : ";
    d.sound();
    

    return 0;
}
