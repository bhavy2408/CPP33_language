// General Exception handler
#include <iostream>

using namespace std;

int main()
{
    try
    {
        int a;

        cout << "Enter Number : ";
        cin >> a;

        if (a == 0)
        {
            throw 0;
        }
        else if (a < 0)
        {
            throw "Negative value";
        }
        else if (a == 5)
        {
            throw 5.5;
        }

        cout << "valid input ";
    }
    catch (int e)
    {
        cout << "integer Exception " << e << endl;
    }
    catch (const char *msg)
    {
        cout << "string Exception ";
    }
    catch (...)
    {
        cout << "Unkown Exception";
    }

    return 0;
}