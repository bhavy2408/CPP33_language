#include<iostream>

using namespace std;

class math{
    public:

    int add(int a ,int b){
        return a + b;
    }

    int add(int a ,int b, int c){
        return a + b + c;
    }

    double add(double a ,double b){
        return a + b;
    }
};

int main()
{
    math m;

    cout << "Addtion of Two number : " << m.add(10,20) << endl;
    cout << "Addtion of Three number : " << m.add(10,20,30) << endl;
    cout << "Addtion of double number : " << m.add(3.4,3.3) << endl;

    return 0;
}