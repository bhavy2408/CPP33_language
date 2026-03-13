// F=c*9/5+32

#include<iostream>

using namespace std;

class P{
    protected:
    float temp;

    public:
    void get_temp(){

        cout << "Enter Temprature :";
        cin >> temp; 
    }
};

class Q : public P{
    protected:
    float feren;

    public:
    void toferen(){
        feren = temp*9/5+32;

        cout << " Celsius to Fahrenheit : " << feren << endl;
    }
};

class R : public Q{
    protected:
    float kelvin;

    public:
    void tokelin(){
        kelvin=(feren - 32) * 9/5 + 273.15;

        cout << "Fahrenheit to kelvin  : " << kelvin << endl;
    }
};

int main()
{
    R obj;
    obj.get_temp();
    obj.toferen();
    obj.tokelin();

    return 0;
}
