#include<iostream>

using namespace std;

class Employee{

    private:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    float emp_salary;
    string emp_city;
    int emp_exp;
    string emp_company_name;

    public:
    void input(){

        cout << "\nEmployee ID : ";
        cin >> emp_id;

        cout << "Employee Name : ";
        cin >> emp_name;

        cout << "Employee Age : ";
        cin >> emp_age;

        cout << "Employee Role : ";
        cin >> emp_role;

        cout << "Employee Salary : ";
        cin >> emp_salary;

        cout << "Employee City : ";
        cin >> emp_city;

        cout << "Employee Experiance(in year) : ";
        cin >> emp_exp;

        cout << "Employee Company : ";
        cin >> emp_company_name;
    }

    void display(){
        
        
        cout << "ID : " << emp_id << endl;
        cout << "Name : " << emp_name << endl;
        cout << "Age : " << emp_age << endl;
        cout << "Role : " << emp_role << endl;
        cout << "Salary : " << emp_salary << endl;
        cout << "City : " << emp_city << endl;
        cout << "Experiance : " << emp_exp << endl;
        cout << "Comapny Name : " << emp_company_name << endl;

        

    };
};

int main()
{
    Employee emp[5];

    cout << "\nEmployee Management records:-";
    cout << "\n========================" ;

    for(int i=0 ; i<2 ; i++)
    {
        cout << "\nEnter Employee Details " << i+1 << endl;
        emp[i].input();       
    }

   cout << "\n-------Employee Details---------\n"; 
    
    for(int i=0 ; i<2 ; i++)
    {
     
        cout << "\nEmployee details " << i+1 << endl;
        emp[i].display();       
    }
    return 0;
}