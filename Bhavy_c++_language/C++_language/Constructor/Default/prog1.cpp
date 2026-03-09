/*Write a Program to get and display N numbers of Fast Food cafe information using
encapsulation and the use of a Default constructor by including the below-mentioned
attributes:-*/
#include<iostream>

using namespace std;

class cafe{
    private:
        int cafe_id;
        string cafe_name;
        string cafe_type;
        string cafe_rating; 
        string cafe_location; 
        int cafe_establish_year;
        int cafe_staff_quantity;

    public:
        cafe(){
            cafe_id=0;
            cafe_name="";
            cafe_type="";
            cafe_rating="";
            cafe_location="";
            cafe_establish_year=0;
            cafe_staff_quantity=0;
        }
        void input(){

            cout << "\n-----------Enter Deatils of cafe---------";
            cout << "\nEnter ID  : ";
            cin >>cafe_id;
            cout << "\nEnter Name  : ";
            cin >>cafe_name;
            cout << "\nEnter Type  : ";
            cin >>cafe_type;
            cout << "\nEnter Rating  : ";
            cin >>cafe_rating;
            cout << "\nEnter Location  : ";
            cin >>cafe_location;
            cout << "\nEnter Establishing Year  : ";
            cin >>cafe_establish_year;
            cout << "\nEnter Staff Quantity  : ";
            cin >>cafe_staff_quantity; 
        }

        void display(){
            cout << "\nId : "<< cafe_id << endl;
            cout << "\nName : "<< cafe_name << endl;
            cout << "\nType : "<< cafe_type << endl;
            cout << "\nRating : "<< cafe_rating << endl;
            cout << "\nLocation : "<< cafe_location << endl;
            cout << "\nEstablishing Year : "<< cafe_establish_year << endl;
            cout << "\nStaff Quantity  : "<< cafe_staff_quantity << endl;

        }

};

int main()
{
    int n;

    cout << "\nEnter No Of Companies : ";
    cin >> n;

    cafe c[100];

    for(int i=0 ; i<n ; i++)
    {
        cout << "\nEnter details Of Cafe" << i+1 << endl;
        c[i].input();
    }
    for(int i=0 ; i<n ; i++)
    {
        cout << "\nDetails Of Cafe"<< i+1 << endl;
        c[i].display();
    }
    return 0;
}
