#include <iostream>

using namespace std;

class car
{

private:
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

public:
    void input()
    {

        cout << "\nEnter car ID : ";
        cin >> car_id;

        cout << "\nEnter car Company Name  : ";
        cin >> car_company_name;

        cout << "\nEnter car Colour  : ";
        cin >> car_color;

        cout << "\nEnter car Model  : ";
        cin >> car_model;

        cout << "\nEnter Releasing year : ";
        cin >> car_release_year;

        cout << "------------------------------";
    }

    void display()
    {
        cout << "\nID : " << car_id << endl;
        cout << "\ncar Company Name : " << car_company_name << endl;
        cout << "\nCar Colour : " << car_color << endl;
        cout << "\nCar Model : " << car_model << endl;
        cout << "\nCar Releasing year : " << car_release_year << endl;
        cout << "\n------------------------------------------";
    };
};

int main()
{
    car c[10];
    int n;

    cout << "\nEnter No Of Car Companies : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Car  Comapnies Details " << i + 1 << endl;
        cout << "------------------------------";
        c[i].input();
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\nCar Comapnies Details " << i + 1 << endl;
        cout << "------------------------------";
        c[i].display();
    }
    return 0;
}