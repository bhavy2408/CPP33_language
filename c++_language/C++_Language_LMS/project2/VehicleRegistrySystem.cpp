// Vehicle Registry System
#include <iostream>

using namespace std;

class Vehicle
{
protected:
    int vehicleId;
    string manufacturer;
    string model;
    int year;

public:
    static int totalVehicles;
    // default constructor
    Vehicle()
    {
        vehicleId = 0;
        manufacturer = "";
        model = "";
        year = 0;
    }

    virtual void display()
    {
        cout << "Vehicle ID : " << vehicleId << endl;
        cout << "Manufacturer : " << manufacturer << endl;
        cout << "Model : " << model << endl;
        cout << "Year : " << year << endl;
    }
    // Destractor
    ~Vehicle()
    {
    }

    // constructor
    Vehicle(int vID, string manu, string m, int y)
    {
        vehicleId = vID;
        manufacturer = manu;
        model = m;
        year = y;
        totalVehicles++;
    }
    // setter method
    void setvehicle()
    {

        cout << "Enter Vehicle Id : ";
        cin >> vehicleId;

        cout << "Enter Manufacturer : ";
        cin >> manufacturer;

        cout << "Enter Model : ";
        cin >> model;

        cout << "Enter Year : ";
        cin >> year;
    }
    // getter method
    void getvehicle()
    {

        cout << "Vehicle ID : " << vehicleId << endl;
        cout << "Manufacturer : " << manufacturer << endl;
        cout << "Model : " << model << endl;
        cout << "Year : " << year << endl;
    }
    int getID()
    {
        return vehicleId;
    }
};
//-------------------------Single Inheritance from Vehicle-------------------------
class Car : public Vehicle
{
protected:
    string fuelType;

public:
    // Car(int vID, string manu, string m, int y, string fuel) : Vehicle(vID, manu, m, y)
    // {
    //   fuelType = fuel;
    // }
    void setcar()
    {
        setvehicle();

        cout << "Enter your Fuel Type (cng , petrol , desiel) : ";
        cin >> fuelType;
    }
    void displaycar()
    {
        getvehicle();

        cout << "Fuel Type : " << fuelType << endl;
    }
};
// -------------------------MUltilevel Inheritance----------------------------------------
class ElectricCar : public Car
{
protected:
    float batteryCapacity;

public:
    ElectricCar(int vID, string manu, string m, int y, string fuel, float battery)
    {
        batteryCapacity = battery;
    }
    void setElectricCar()
    {
        setcar();

        cout << "\nEnter your Battery Capacity (in percentage)) : ";
        cin >> batteryCapacity;
    }
    void displayElectricCar()
    {
        displaycar();

        cout << "\nBattery Capacity : " << batteryCapacity << endl;
    }
};
// SportsCar (Multilevel Inheritance from ElectricCar)
// - Additional attribute: topSpeed
class SportsCar : public ElectricCar
{
protected:
    float topspeed;

public:
    SportsCar(int vID, string manu, string m, int y, string fuel, float battery, float speed) : ElectricCar(vID, manu, m, y, fuel, battery)
    {
        topspeed = speed;
    }
    void setSportsCar()
    {
        setElectricCar();
        cout << "\nEnter Top Speed (in km): ";
        cin >> topspeed;
    }
    void displaySportsCar()
    {
        displayElectricCar();
        cout << "\nTop Speed : " << topspeed << endl;
    }
};
//--------------------Hierarchical Inheritance-------------------------
// Sedan (Hierarchical Inheritance from Car)
class Sedan : public Car
{
public:
    Sedan(int vID, string manu, string m, int y, string fuel)
    {
    }
    void displaySedan()
    {
        cout << "\n---Sedan---";
        displaycar();
    }
};
// SUV (Hierarchical Inheritance from Car)
class SUV : public Car
{
public:
    SUV(int vID, string manu, string m, int y, string fuel)
    {
    }
    void displaySUV()
    {
        cout << "\n---SUV---";
        displaycar();
    }
};
//-----------------------------Multiple Inheritance---------------------------
// Aircraft (Base Class for Multiple Inheritance)
//- Additional attribute: flightRange
class Aircraft
{
protected:
    float flightrange;

public:
    Aircraft(float range)
    {
        flightrange = range;
    }
    void setAircraft()
    {
        cout << "Enter Flight Range (in km): ";
        cin >> flightrange;
    }
    void displayAircraft()
    {
        cout << "Flight Range : " << flightrange << endl;
    }
};
// FlyingCar (Multiple Inheritance from Car and Aircraft)
class FlyingCar : public Car, public Aircraft
{
public:
    FlyingCar(int vID, string manu, string m, int y, string fuel, float range) : Aircraft(range)
    {
    }
    void displayFlyingCar()
    {
        displaycar();
        displayAircraft();
    }
};

class VehicleRegistry
{
    Vehicle *Vehicles[50];
    int count;

public:
    VehicleRegistry()
    {
        count = 0;
    }

    void addingvehicle(Vehicle *v)
    {
        Vehicles[count++] = v;
    }

    void displayingvehicle()
    {
        for (int i = 0; i < count; i++)
        {
            Vehicles[i]->display();
            cout << "\n--------------------";
        }
    }

    void searching(int id)
    {
        for (int i = 0; i < count; i++)
        {
            if (Vehicles[i]->getID() == id)
            {
                Vehicles[i]->display();
                break;
            }
        }
    }
};

int Vehicle ::totalVehicles = 0;

int main()
{
    VehicleRegistry vr;
    int choice;

    do
    {
        cout << "\n ====== Vehical Regitery System ====== \n";
        cout << "1. Add CAR : \n";
        cout << "2. Add Electric Car : \n";
        cout << "3. Add Sports CAR : \n";
        cout << "4. Add Suv CAR : \n";
        cout << "5. Add Sedan CAR : \n";
        cout << "6. Add Aircraft : \n";
        cout << "7. Add FlyingCAR : \n";
        cout << "8. Display All Vehicles : \n";
        cout << "9. Search Vehicle : \n";
        cout << "10. Exit \n";

        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice){
            case 1:
            Car *c = new Car();
            c->setcar();
            vr.addingvehicle(c);
            break;
        }
    }while(choice != 10);
    return 0;
}