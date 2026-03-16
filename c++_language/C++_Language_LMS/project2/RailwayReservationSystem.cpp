//Railway Reserve 
#include<iostream>

using namespace std;

class train{
    private:
        int trainNumber;
        char trainName[50];
        char source[50];
        char destination[50];
        char trainTime[10];

        static int traincount;

    public:

    //default constructor:-
    train()
    {
        trainNumber=0;
        trainName=new char [1];
        trainName[0]='/0';
        source=new char [1];
        source[0]='/0';
        destination=new char [1];
        destination[0]='/0';
        trainTime=new char [1];
        trainTime[0]='/0';
        traincount++; 
    }

    //parameterized constructor:-
    train(int num , const char* tname , const char* s , const char* d, const char* ttime ){
        trainNumber=num;
        trainName = new char[strlen(tname) + 1];
        strcpy(trainName, tname);
        source=new char[strlen(s)+1];
        strcpy(source,s);
        destination=new char[strlen(d)+1];
        strcpy(destination,d);
        trainTime=new char[strlen(ttime)+1];
        strcpy(trainTime,ttime);

        traincount++;

        ~train(){
            traincount--;
        }
        //setter method
        void settrainNumber(int num){
            trainNumber=num;
        }
        void set trainName(const char* tname){
            trainName=tname;
        }
        void setsource(const char* s){
            source=s;
        }
        void setdestination(const char* d){
            destination=d;
        }
        void settrainTime(const char* ttime){
            trainTime=ttime;
        }
        
        //getter method
        int gettrainNumber() const{
            return trainNumber;
        }
        const char* gettrainName() const{
            return trainName;
        }
        const char* getsource() const{
            return source;
        }
        const char* getdestination() const{
            return destination;
        }
        const char* gettrainTime() const{
            return trainTime;
        }

        // inputing the deatils 
        void inputTrainDetails(){
            cout << "Enter The Train Number : ";
            cin >> trainNumber;

            cout << "Enter The Train Name : ";
            cin >> trainName;
            
            cout << "Enter The Train Source : ";
            cin >> source;

            cout << "Enter The Trai Destination : ";
            cin >> destination;

            cout << "Enter The Train time: ";
            cin >> trainTime;
        }
        // display train details
        void displayTrainDetails(){
            cout << "Train Number : " << trainNumber << endl;
            cout << "Train Name : " << trainName << endl;
            cout << "Train Source : " << source << endl;
            cout << "Train Destination : " << destination << endl;
            cout << "Train Timeing : " << trainTime << endl;
        }

        //static
        static int getTrainCount(){
            return traincount;
        }

    }
};
int train::traincount=0;

class RailwaySystem{
    private:
    train trains[100];
    int totalTrains=0;

    public:
    void addtrain(){
        if(trains < 100)
        {
            train[totalTrains].inputTrainDetails();
            totalTrains++;
        }else{
            cout << "Storage is full !"; 
        }
    }

    void displayAllTrains(){
        if(totalTrains==0){
            cout << "trains is not found ";
        }else{
            for(int i=0 ; i<totalTrains ; i++)
            {
                train[i].displayTrainDetails();
            }
        }
    }

   void searchTrainByNumber(int number){

    for(int i=0 ; i< totalTrains ; i++)
    {
        if(train[i].gettrainNumber()==number)
        {
            return train[i];
        }else{
            cout << "Train is not found" << endl;
        }
    }
   }
   
};
int main(){

}