// TIME CONVERTOR
#include <stdio.h>

using namespace std;

class timeconvertor
{
public:
    int sec, hours, min, ans;

    void convertor()
    {
        int choice;

        cout << "\n--------------Time Convertor--------------";

        cout << "\n1. Second to Hours";
        cout << "\n2. Hours to Seconds";
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "\n-------1. Second to Hours------------";

            cout << "\nEnter Seconds : ";
            cin >> sec;

            hours = sec / 3600;

            cout << "\n Hours = " << hours << endl;

            break;

        case 2:
            cout << "\n-------2. Hours to Seconds------------";

            cout << "\nEnter Hours : "; // 4
            cin >> hours;

            cout << "\nEnter Minutes : "; // 32
            cin >> min;

            cout << "\nEnter Seconds : "; // 23
            cin >> sec;

            ans = (hours * 3600) + (min * 60) + sec;
            cout << "\n Hours = " << ans << endl;

            break;

        default:
            cout << "\nInvalid Choice";
        }
    }
};
int main()
{
    timeconvertor t;

    t.convertor();

    return 0;
}