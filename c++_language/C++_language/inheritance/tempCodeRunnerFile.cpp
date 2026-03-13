#include<iostream>

using namespace std;

class X{
    protected:
    int a;
    int b;
    int c;

    public:
    void setdata(){
        cout << "Enter Number A =" ;
        cin >> a ;

        cout << "Enter Number B =" ;
        cin >> b ;

        cout << "Enter Number C =" ;
        cin >> c;

    }
};

class Y : public X{
    public:
    void getdata(){
    int cubs;

    cubs = (a * a * a) + (b * b * b) + (c * c * c);

    cout << "Sum of 3 Number Of cubes : " << cubs << endl;
    }
};

int main()
{
    Y obj;

    obj.setdata();
    obj.getdata();

    return 0;
}