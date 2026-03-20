#include<iostream>

using namespace std;

class Vehicle{
    protected:
    int vehicleID;
    string manufacturer;
    string Model;
    int year;

    static int totalVehicles;
    public:
    Vehicle(){
        vehicleID=0;
        manufacturer="";
        Model="";
        year=0;
    }
    Vehicle(int vid , string manu , string m , int y){
        vehicleID=vid;
        manufacturer=manu;
        Model=m;
        year=y;
        totalVehicles++;
    }

    ~Vehicle(){}

    //setter
    
    void set(){

        cout << "Enter Vehicle ID : ";
        cin  >> vehicleID;

        cout << "Enter Manufacturer : ";
        cin  >> manufacturer;

        cout << "Enter Model : ";
        cin  >> Model;

        cout << "Enter Year : ";
        cin  >> year;
    }
    //getter
    int getID(){
        return vehicleID;
    }
    //display
    void display(){

        cout << "ID : " << vehicleID << endl;
        cout << "Manufacturer : " << manufacturer << endl;
        cout << "Model : " << Model << endl;
        cout << "Year : " << year << endl;
    }     
};

int Vehicle :: totalVehicles=0;

class Car : public Vehicle{
    protected:
    string fueltype;

    public:
    Car():Vehicle(){}

    Car(int vid , string manu , string m , int y , string fuel):Vehicle(vid , manu , m , y){
        fueltype=fuel;
    }
    void Carset(){
        set();
        cout << "Enter Fuel Type (petrol , desiel , CNG) : ";
        cin >> fueltype; 
    }

    void Cardisplay(){
        display();
        cout << "Fuel Type: " << fueltype << endl;
    }
};

class ElectricCar : public Car{
    protected:
    int batteryCapacity;

    public:
    ElectricCar():Car(){}

    ElectricCar(int vid , string manu , string m , int y , string fuel , int bc):Car(vid , manu , m , y , fuel){
        batteryCapacity=bc;
    }

    void ElectricCarset(){
        Carset();
        cout << "Enter Battery Capacity : ";
        cin >> batteryCapacity;
    }

    void ElectricCardisplay(){
        Cardisplay();
        cout << "Batter Capacity: " << batteryCapacity << "kwh" << endl;
    }
};

class SportsCar : public ElectricCar{
    protected:
    float topSpeed;

    public:

    SportsCar() : ElectricCar(){}

    SportsCar(int vid , string manu , string m , int y , string fuel , int bc , float ts) : ElectricCar(vid , manu , m , y , fuel , bc){
        topSpeed=ts;
    }
    void SportsCarset(){
        ElectricCarset();
        cout << "Enter Top Speed : ";
        cin >> topSpeed;
        
    }

    void SportsCardisplay(){
        ElectricCardisplay();
        cout << "Enter Top Speed : " << topSpeed << "km/h" << endl; 
    }
};

class Sedan : public Car{

    public:
    Sedan(int vid , string manu , string m , int y , string fuel) : Car(vid , manu , m , y , fuel){
    }
    void Sedanset(){
        Carset();
    }

    void Sedandisplay(){
        Cardisplay();
    }
};

class SUV : public Car{

    public:
    SUV(int vid , string manu , string m , int y , string fuel) : Car(vid , manu , m , y , fuel){
    }
    void SUVset(){
        Carset();
    }
    void SUVdisplay(){
        Cardisplay();
    }
};

class Aircraft{
    protected:
    float flightRange;

    public:
    
    Aircraft(){
    flightRange = 0;
    }

    Aircraft(float fr){
        flightRange=fr;
    }
    void Aircraftset(){
        cout << "Flight Range : ";
        cin >> flightRange;
        
    }
    void Aircraftdisplay(){
        cout << "Flight Range : " << flightRange << endl;
    }
};

class FlyingCar : public Car , public Aircraft{

    public:

    FlyingCar() : Car() , Aircraft(){}

    FlyingCar(int vid , string manu , string m , int y , string fuel , float fr) : Car(vid , manu , m , y , fuel),Aircraft(fr){
    }   
    void FlyingCarset(){
        Carset();
        Aircraftset();
    }
    void FlyingCardisplay(){
        Cardisplay();
        Aircraftdisplay();
    }
};

class VehicleRegistry{
    protected:
    Vehicle* Vehicles[100];
    int count;

    public:

    VehicleRegistry(){
        count=0;
    }

    void Addingvehicale(Vehicle* v){
        Vehicles[count++]=v;
    }

    void displayallvehicles(){
        for(int i=0 ; i<count ; i++)
        {
            Vehicles[i]->display();
        }
    }

    void searchByID(int num){
        bool found = false;

        for(int i = 0; i < count; i++)
        {
            if(Vehicles[i]->getID() == num)
        {
            Vehicles[i]->display();
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "Vehicle not found\n";
    }
}
};

int main(){
    VehicleRegistry vr;
    int choice;

    do {
        cout << "\n\n===== VEHICLE REGISTRY =====";
        cout << "\n1. Add Car";
        cout << "\n2. Add Electric Car";
        cout << "\n3. Add Sports Car";
        cout << "\n4. Add Sedan";
        cout << "\n5. Add SUV";
        cout << "\n6. Add Flying Car";
        cout << "\n7. View All";
        cout << "\n8. Search by ID";
        cout << "\n9. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        int id, year, battery, speed, range;
        string manu, model, fuel;

        switch (choice) {
        case 1:
            cout << "Enter ID : ";
            cin >> id;
            cout << "Enter Manufacturer : ";
            cin >> manu;
            cout << "Enter Model : ";
            cin >> model;
            cout << "Enter Year : ";
            cin >> year;
            cout << "Enter Fuel : ";
            cin >> fuel;
            vr.Addingvehicale(new Car(id, manu, model, year, fuel));
            break;

        case 2:
            cout << "Enter ID : ";
            cin >> id;
            cout << "Enter Manufacturer : ";
            cin >> manu;
            cout << "Enter Model : ";
            cin >> model;
            cout << "Enter Year : ";
            cin >> year;
            cout << "Enter Fuel : ";
            cin >> fuel;
            cout << "Enter Battery Capacity : ";
            cin >> battery;
            vr.Addingvehicale(new ElectricCar(id, manu, model, year, fuel, battery));
            break;

        case 3:
            cout << "Enter ID : ";
            cin >> id;
            cout << "Enter Manufacturer : ";
            cin >> manu;
            cout << "Enter Model : ";
            cin >> model;
            cout << "Enter Year : ";
            cin >> year;
            cout << "Enter Fuel : ";
            cin >> fuel;
            cout << "Enter Battery Capacity : ";
            cin >> battery;
            cout << "Enter Top Speed : ";
            cin >> speed;
            vr.Addingvehicale(new SportsCar(id, manu, model, year, fuel, battery, speed));
            break;

        case 4:
            cout << "Enter ID : ";
            cin >> id;
            cout << "Enter Manufacturer : ";
            cin >> manu;
            cout << "Enter Model : ";
            cin >> model;
            cout << "Enter Year : ";
            cin >> year;
            cout << "Enter Fuel : ";
            cin >> fuel;
            vr.Addingvehicale(new Sedan(id, manu, model, year, fuel));
            break;

        case 5:
            cout << "Enter ID : ";
            cin >> id;
            cout << "Enter Manufacturer : ";
            cin >> manu;
            cout << "Enter Model : ";
            cin >> model;
            cout << "Enter Year : ";
            cin >> year;
            cout << "Enter Fuel : ";
            cin >> fuel;
            vr.Addingvehicale(new SUV(id, manu, model, year, fuel));
            break;

        case 6:
            cout <<"------"
            cout << "Enter ID : ";
            cin >> id;
            cout << "Enter Manufacturer : ";
            cin >> manu;
            cout << "Enter Model : ";
            cin >> model;
            cout << "Enter Year : ";
            cin >> year;
            cout << "Enter Fuel : ";
            cin >> fuel;
            cout << "Enter Range : ";
            cin >> range;
            vr.Addingvehicale(new FlyingCar(id, manu, model, year, fuel, range));
            break;

        case 7:
            vr.displayallvehicles();
            break;

        case 8:
            cout << "Enter ID: ";
            cin >> id;
            vr.searchByID(id);
            break;
        }

    } while (choice != 9);

    return 0;
}