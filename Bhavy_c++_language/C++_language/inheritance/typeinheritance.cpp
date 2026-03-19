#include<iostream>

using namespace std;

class RBI{
    protected:
    double roi;

    public:
    RBI(double r) : roi(r){}

    double getROI(){
        return  roi;
    }
};

class SBI :  public RBI{
    public:
    SBI(double r) : RBI(r) {}
};

class BOB :  public RBI{
    public:
    BOB(double r) : RBI(r) {}
};

class ICICI :  public RBI{
    public:
    ICICI(double r) : RBI(r) {}
};

int main()
{
    SBI sbi(6.7);
    BOB bob(9.7);
    ICICI icici(8.7);
    cout << "SBI ROI " << sbi.getROI() << "%" <<endl;
    cout << "BOB ROI " << bob.getROI() << "%" <<endl;
    cout << "ICICI ROI " << icici.getROI() << "%" <<endl;

    return 0;
}