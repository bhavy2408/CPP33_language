// WAP to get and display N numbers of Hotels and static information using Encapsulation with an array of objects by including the below-mentioned attributes:

#include <iostream>

using namespace std;

class hotel
{
private:
    int hotel_id;
    string hotel_name;
    string hotel_type;
    string hotel_rating;
    string hotel_location;
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

    static string country;

public:
    void setdata(int id,
                 string name,
                 string type,
                 string rating,
                 string location,
                 int year,
                 int staff,
                 int room)
    {
        hotel_id = id;
        hotel_name = name;
        hotel_type = type;
        hotel_rating = rating;
        hotel_location = location;
        hotel_establish_year = year;
        hotel_staff_quantity = staff;
        hotel_room_quantity = room;
    }

    void display()
    {
        cout << "Details of hotels :-\n"
             << endl;

        cout << "\nHotel Id = " << hotel_id << endl;
        cout << "\nHotel Name = " << hotel_name << endl;
        cout << "\nHotel Type = " << hotel_type << endl;
        cout << "\nHotel Rating = " << hotel_rating << endl;
        cout << "\nHotel Location = " << hotel_location << endl;
        cout << "\nHotel Establishing year = " << hotel_establish_year << endl;
        cout << "\nHotel Staff Quantity = " << hotel_staff_quantity << endl;
        cout << "\nHotel Room Quantity =" << hotel_room_quantity << endl;
        cout << "\nCountry = " << country << endl;
        cout << "\n=======================================================\n"
             << endl;
    }

    static void setcountry(string c)
    {
        country = c;
    }
};

string hotel ::country = "India";

int main()
{
    int n;

    cout << "Enter Number Of Hotel = ";
    cin >> n;

    hotel h[n];

    int id, year, staff, room;
    string name, type, rating, location;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Details Of Hotel\n"
             << i + 1 << endl;
        cout << "\nEnter Hotel ID=";
        cin >> id;
        cout << "\nEnter Hotel Name=";
        cin >> name;
        cout << "\nEnter Hotel type =";
        cin >> type;
        cout << "\nEnter Hotel rating =";
        cin >> rating;
        cout << "\nEnter Hotel location =";
        cin >> location;
        cout << "\nEnter Hotel Establishing year =";
        cin >> year;
        cout << "\nEnter Hotel Staff Quantity =";
        cin >> staff;
        cout << "\nEnter Hotel Room Quantity =";
        cin >> room;

        h[i].setdata(id, name, type, rating, location, year, staff, room);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\nDetails Of Hotel" << i + 1 << endl;
        h[i].display();
    }
    return 0;
}
