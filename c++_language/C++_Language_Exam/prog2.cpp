/*2. Define a class named `Employee` with private attributes `name`, `salary`, and `designation`. 
Encapsulate these attributes using appropriate access specifiers. 
Implement public member functions to set and get the values of these attributes. 
Demonstrate the encapsulation concept by accessing these attributes through the member functions.
*/

#include<iostream>

using namespace std;

class Employee{
    private:
    string name;
    int salary;
    string designation;

    public:
    Employee(){
        name="";
        salary=0;
        designation="";
    }
    Employee(string n , int s , string d){
        name = n;
        salary = s;
        designation = d;
    }
    void set(){
       

        cout << "Enter Name : " ;
        cin >> name;

        cout << "Enter Salary : " ;
        cin >> salary;

        cout << "Enter Designation : " ;
        cin >> designation;
    }
    void get(){

        cout << "Name : " << name << endl;
        cout << "Salary : " << salary << endl;
        cout << "Designation : " << designation << endl;
    }

};
int main(){
    Employee e[10];
    int a;

    cout <<"Enter No of Employee : ";
    cin >> a;

    for(int i=0 ; i<a ; i++){
        cout <<"\n-------Enter Details of Employee no " << i+1 << "-------"<< endl;
        e[i].set();
    }

    for(int i=0 ; i<a ; i++){
        cout <<"\n-------Details of Employee no " << i+1 << "-------"<< endl;
        e[i].get();
    }
    return 0;
}