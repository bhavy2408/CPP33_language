// Railway Reserve
#include <iostream>
#include <cstring>

using namespace std;

class train
{
private:
    int trainNumber;
    char *trainName;
    char *source;
    char *destination;
    char *trainTime;

    static int traincount;

public:
    // default constructor:-
    train()
    {
        trainNumber = 0;
        trainName = new char[1];
        trainName[0] = '\0';
        source = new char[1];
        source[0] = '\0';
        destination = new char[1];
        destination[0] = '\0';
        trainTime = new char[1];
        trainTime[0] = '\0';
        traincount++;
    }

    // parameterized constructor:-
    train(int num, const char *tname, const char *s, const char *d, const char *ttime)
    {
        trainNumber = num;
        trainName = new char[strlen(tname) + 1];
        strcpy(trainName, tname);

        source = new char[strlen(s) + 1];
        strcpy(source, s);

        destination = new char[strlen(d) + 1];
        strcpy(destination, d);

        trainTime = new char[strlen(ttime) + 1];
        strcpy(trainTime, ttime);

        traincount++;
    }
    // destractor
    ~train()
{
    delete[] trainName;
    delete[] source;
    delete[] destination;
    delete[] trainTime;
    traincount--;
}
    // setter method
    void settrainNumber(int num)
    {
        trainNumber = num;
    }
   void settrainName(const char *tname)
{
    delete[] trainName;
    trainName = new char[strlen(tname) + 1];
    strcpy(trainName, tname);
}
    void setsource(const char *s)
    {
        source = new char[strlen(s) + 1];
        strcpy(source, s);
    }
    void setdestination(const char *d)
    {
        destination = new char[strlen(d) + 1];
        strcpy(destination, d);
    }
    void settrainTime(const char *ttime)
    {
        trainTime = new char[strlen(ttime) + 1];
        strcpy(trainTime, ttime);
    }

    // getter method
    int gettrainNumber() const
    {
        return trainNumber;
    }
    const char *gettrainName() const
    {
        return trainName;
    }
    const char *getsource() const
    {
        return source;
    }
    const char *getdestination() const
    {
        return destination;
    }
    const char *gettrainTime() const
    {
        return trainTime;
    }

    // inputing the deatils
   void inputTrainDetails()
{
    char tname[50], s[50], d[50], ttime[20];

    cout << "Enter Train Number: ";
    cin >> trainNumber;

    cout << "Enter Train Name: ";
    cin >> tname;

    cout << "Enter Source: ";
    cin >> s;

    cout << "Enter Destination: ";
    cin >> d;

    cout << "Enter Time: ";
    cin >> ttime;

    settrainName(tname);
    setsource(s);
    setdestination(d);
    settrainTime(ttime);
}
    // display train details
    void displayTrainDetails()
    {
        cout << "Train Number : " << trainNumber << endl;
        cout << "Train Name : " << trainName << endl;
        cout << "Train Source : " << source << endl;
        cout << "Train Destination : " << destination << endl;
        cout << "Train Timeing : " << trainTime << endl;
    }
    // static
    static int getTrainCount()
    {
        return traincount;
    }
};
int train::traincount = 0;

class RailwaySystem
{
private:
    train trains[100];
    int totalTrains = 0;

public:
    void addtrain()
    {
        if (totalTrains < 100){
            trains[totalTrains].inputTrainDetails();
            totalTrains++;
        }
        else{
            cout << "Storage is full !";
        }
    }

    void displayAllTrains()
    {
        if (totalTrains == 0)
        {
            cout << "trains is not found ";
        }
        else
        {
            for (int i = 0; i < totalTrains; i++)
            {
               trains[i].displayTrainDetails();
            }
        }
    }

void searchTrainByNumber(int number)
  {

    bool found = false;

    for (int i = 0; i < totalTrains; i++)
    {
      if (trains[i].gettrainNumber() == number)
      {
        trains[i].displayTrainDetails();
        found = true;
        break;
      }
    }
    if(!found)
    {
      cout << "Train is not found" << endl;
    }
  }
};

int main(){
    RailwaySystem system;
    int choice;

    cout <<"\n+++++++++++++Railway Reservation System Menu++++++++++++++\n";
    cout <<"\n++++             1. Add New Train Record              ++++\n";
    cout <<"\n++++             2. Display All Train Records         ++++\n";
    cout <<"\n++++             3. Search Train by Number            ++++\n";
    cout <<"\n++++             4. Exit                              ++++\n";
    cout <<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";

    

    do{

        cout << "\nEnter Your Choice : ";
        cin >> choice;

    
        switch (choice){
            case 1:
                cout <<  "\n1. Add New Train Record\n" << endl;
                system.addtrain();
                break;

            case 2:
                cout <<"\n2. Display All Train Records" << endl;
                system.displayAllTrains();
                break;

            case 3:
                cout << "\n3. Search Train by Number" << endl;
                int number;
                cout << "Enter train number to search: ";
                cin >> number;
                system.searchTrainByNumber(number);
                break;

            case 4:
                cout << "Exit....." << endl;
        }
    }while (choice != 4);
            
     

   return 0;
}