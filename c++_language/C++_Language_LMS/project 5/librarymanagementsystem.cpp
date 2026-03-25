//Library Management System
#include<iostream>

using namespace std;

class LibraryItem{
    private:
    string title;
    string author;
    string dueDate;

    public:
    void setTitle(string newTitle){
        title = newTitle;
    }
    void setAuthor(string newAuthor){
        author = newAuthor;
    }
    void setDueDate(string newDueDate){
        dueDate = newDueDate;
    }

    string gettitle(){
        return title;
    }
    string getAuthor(){
        return author;
    }
    string getDueDate(){
        return dueDate;
    }

    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() = 0;

    virtual ~LibraryItem() {
    };
};

class Book : public LibraryItem{
    private:
    int pages;

    public:
    void setpages(int p){
        pages = p;
    }
    void checkout(){
        cout << "\nchecked the book\n";
    }
    void returnItem(){
        cout << "\nBook Return \n";
    }
    void displayDetails() {
        cout << "\nBooks Details :- \n";
        cout << "\nTitle : " << gettitle() << endl;
        cout << "\nAuther : " << getAuthor() << endl;
        cout << "\nDate : " << getDueDate() << endl;
        cout << "\nPages : "<< pages << endl;
    }
};

class DVD : public LibraryItem{
    private:
    int timeduration;

    public:
    void settimeduration(int td){
        timeduration = td;
    }
    void checkout(){
        cout << "\nDVD checkout \n";
    }
    void returnItem(){
        cout << "\n DVD Return \n";
    }
    void displayDetails(){
        cout << "\n DVD Details :- \n";
        cout << "\nTitle : " << gettitle() << endl;
        cout << "\nAuther : " << getAuthor() << endl;
        cout << "\nDate : " << getDueDate() << endl;
        cout << "\nTime Duration : "<< timeduration << endl;
    }
};

class Magazine : public LibraryItem{
    private:
    int issueNumber;

    public:
    void setissueNumber(int i){
        issueNumber = i;
    }
    void checkout(){
        cout << "\nMagazine checkout \n";
    }
    void returnItem(){
        cout << "\n Magazine Return \n";
    }
    void displayDetails(){
        cout << "\n Magazine Details :- \n";
        cout << "\nTitle : " << gettitle() << endl;
        cout << "\nAuther : " << getAuthor() << endl;
        cout << "\nDate : " << getDueDate() << endl;
        cout << "\nIssue Number : "<< issueNumber << endl;
    } 
};

int main(){
    LibraryItem* libraryItems[10];
    int choice;

    cout << "-------------------------------\n";
    cout << "----     1.Add book        ----\n";
    cout << "----     2.Add DVD         ----\n";
    cout << "----     3.Add Magazine    ----\n";
    cout << "----     4.Display All     ----\n";
    cout << "----     5.Exit            ----\n";
    cout << "-------------------------------\n";
    cout << "\n Enter Your Choice : ";
    cin >> choice;

    switch(choice){
        case 1:
        Book* b = new Book();
        string title , Author , Date ;
        int pages;

        cout << "Enter Title : ";
        cin >> title;

        cout << "Enter Auther : ";
        cin >> Author;

        cout << "Enter Date : ";
        cin >> Date;

        cout << "Enter Pages : ";
        cin >> pages;

       if(pages < 0){
            cout << "Ivalide Pages";
            break;
       }

       b->checkOut();
       b->returnItem();
       b->displayDetails();



    }

}