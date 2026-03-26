// Library Management System
#include <iostream>

using namespace std;

class LibraryItem
{
private:
    string title;
    string author;
    string dueDate;

public:
    void setTitle(string newTitle)
    {
        title = newTitle;
    }
    void setAuthor(string newAuthor)
    {
        author = newAuthor;
    }
    void setDueDate(string newDueDate)
    {
        dueDate = newDueDate;
    }

    string gettitle()
    {
        return title;
    }
    string getAuthor()
    {
        return author;
    }
    string getDueDate()
    {
        return dueDate;
    }

    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() = 0;

    virtual ~LibraryItem() {
    };
};

class Book : public LibraryItem
{
private:
    int pages;

public:
    void setpages(int p)
    {
        pages = p;
    }
    void checkOut()
    {
        cout << "\nBook checked out \n";
    }
    void returnItem()
    {
        cout << "\nBook Return \n";
    }
    void displayDetails()
    {
        cout << "\nBooks Details :- \n";
        cout << "\nTitle : " << gettitle() << endl;
        cout << "\nAuther : " << getAuthor() << endl;
        cout << "\nDate : " << getDueDate() << endl;
        cout << "\nPages : " << pages << endl;
    }
};

class DVD : public LibraryItem
{
private:
    int timeduration;

public:
    void settimeduration(int td)
    {
        timeduration = td;
    }
    void checkOut()
    {
        cout << "\nDVD checkout \n";
    }
    void returnItem()
    {
        cout << "\n DVD Return \n";
    }
    void displayDetails()
    {
        cout << "\n DVD Details :- \n";
        cout << "\nTitle : " << gettitle() << endl;
        cout << "\nAuther : " << getAuthor() << endl;
        cout << "\nDate : " << getDueDate() << endl;
        cout << "\nTime Duration : " << timeduration << endl;
    }
};

class Magazine : public LibraryItem
{
private:
    int issueNumber;

public:
    void setissueNumber(int i)
    {
        issueNumber = i;
    }
    void checkOut()
    {
        cout << "\nMagazine checkout \n";
    }
    void returnItem()
    {
        cout << "\n Magazine Return \n";
    }
    void displayDetails()
    {
        cout << "\n Magazine Details :- \n";
        cout << "\nTitle : " << gettitle() << endl;
        cout << "\nAuther : " << getAuthor() << endl;
        cout << "\nDate : " << getDueDate() << endl;
        cout << "\nIssue Number : " << issueNumber << endl;
    }
};

int main()
{
    LibraryItem *libraryItems[10];
    int count = 0;
    int choice;

    do
    {
        cout << "\n-------------------------------\n";
        cout << "1. Add Book\n";
        cout << "2. Add DVD\n";
        cout << "3. Add Magazine\n";
        cout << "4. Display All\n";
        cout << "5. Exit\n";
        cout << "-------------------------------\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        string title, author, date;

        switch (choice)
        {
        case 1:
        {
            if (count >= 10)
            {
                cout << "Library Full!\n";
                break;
            }

            Book *b = new Book();
            int pages;

            cout << "Enter Title: ";
            cin >> title;

            cout << "Enter Author: ";
            cin >> author;

            cout << "Enter Date: ";
            cin >> date;

            cout << "Enter Pages: ";
            cin >> pages;

            if (pages < 0)
            {
                cout << "Invalid Pages!\n";
                delete b;
                break;
            }

            b->setTitle(title);
            b->setAuthor(author);
            b->setDueDate(date);
            b->setpages(pages);

            libraryItems[count++] = b;
            break;
        }

        case 2:
        {
            if (count >= 10)
            {
                cout << "Library Full!\n";
                break;
            }

            DVD *d = new DVD();
            int time;

            cout << "Enter Title: ";
            cin >> title;

            cout << "Enter Author: ";
            cin >> author;

            cout << "Enter Date: ";
            cin >> date;

            cout << "Enter Duration: ";
            cin >> time;

            d->setTitle(title);
            d->setAuthor(author);
            d->setDueDate(date);
            d->settimeduration(time);

            libraryItems[count++] = d;
            break;
        }

        case 3:
        {
            if (count >= 10)
            {
                cout << "Library Full!\n";
                break;
            }

            Magazine *m = new Magazine();
            int issue;

            cout << "Enter Title: ";
            cin >> title;

            cout << "Enter Author: ";
            cin >> author;

            cout << "Enter Date: ";
            cin >> date;

            cout << "Enter Issue Number: ";
            cin >> issue;

            m->setTitle(title);
            m->setAuthor(author);
            m->setDueDate(date);
            m->setissueNumber(issue);

            libraryItems[count++] = m;
            break;
        }

        case 4:
        {
            if (count == 0)
            {
                cout << "No items available!\n";
            }
            else
            {
                for (int i = 0; i < count; i++)
                {
                    libraryItems[i]->displayDetails();
                }
            }
            break;
        }

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    // Free memory
    for (int i = 0; i < count; i++)
    {
        delete libraryItems[i];
    }

    return 0;
}