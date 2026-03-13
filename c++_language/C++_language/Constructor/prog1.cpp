/*Write a Program to get and display N numbers of Diamond companies information
using encapsulation and use of Parameterised Constructor by including below
mentioned attributes:*/
#include <iostream>
#include <vector>

using namespace std;

class Diamond
{
private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    Diamond(int id, string name, int staff, double revenue,
            int import, int exports, string ceo)
    {

        comp_id = id;
        comp_name = name;
        comp_staff_quantity = staff;
        comp_revenue = revenue;
        comp_import_raw_diamonds = import;
        comp_export_diamonds = exports;
        comp_ceo = ceo;
    }
    void display()
    {

        cout << "\n Company Id : " << comp_id << endl;
        cout << "\n Company Name : " << comp_name << endl;
        cout << "\n Company Staff Quantity : " << comp_staff_quantity << endl;
        cout << "\n Company Revnue : " << comp_revenue << endl;
        cout << "\n Company Import Raw Diamond : " << comp_import_raw_diamonds << endl;
        cout << "\n Company Export  : " << comp_export_diamonds << endl;
        cout << "\n Company Ceo : " << comp_ceo << endl;
    }
};

int main()
{
    int n;

    vector<Diamond> companies;

    cout << "Enter No Of Companies : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int id, staff, import, exports;
        string name, ceo;
        double revenue;

        cout << "\nEnter Details of companies:-" << i + 1 << endl;

        cout << "\n Enter ID : ";
        cin >> id;

        cout << "\n Enter Name : ";
        cin >> name;

        cout << "\n Enter Staff Quantity : ";
        cin >> staff;

        cout << "\n Enter Revnue : ";
        cin >> revenue;

        cout << "\n Enter Import Raw Diamond : ";
        cin >> import;

        cout << "\n Enter Export : ";
        cin >> exports;

        cout << "\n Enter Ceo : ";
        cin >> ceo;

        companies.push_back(Diamond(id, name, staff, revenue, import, exports, ceo));
    }
    cout << "\n--- Diamond Companies Information ---" << endl;

    for (int i = 0; i < n; i++)
    {
        companies[i].display();
    }

    return 0;
}
