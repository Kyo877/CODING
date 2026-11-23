// Lab 5, Task A1: five if-statement traps (Ch4, slides 23-34).
// Each check has a comment that says what it SHOULD do. This program does not do it.
// Name: WONG YAN KANG Matric: A26CS0465
#include <iostream>
using namespace std;

int main()
{
    // Check 1: print "sold out" only when tickets == 0. Here tickets is 5.
    int tickets = 5;
    if (tickets = 0)
    {
        cout << "Check 1: sold out" << endl;
    }
    cout << "Check 1: tickets left = " << tickets << endl;

    // Check 2: print x only when 2 < x < 9. Here x is 12.
    int x = 12;
    if (2 < x < 9)
    {
        cout << "Check 2: " << x << " is between 2 and 9" << endl;
    }

    // Check 3: say "not above 9" when n is NOT bigger than 9. Here n is 5.
    int n = 5;
    if (!n > 9)
    {
        cout << "Check 3: n is not above 9" << endl;
    }
    else
    {
        cout << "Check 3: n is above 9" << endl;
    }

    // Check 4: print y if it is odd and below 10, otherwise print "Wrong number". Here y is 12.
    int y = 12;
    cout << "Check 4: ";
    if (y % 2 == 1)
        if (y < 10)
            cout << y;
    else
        cout << "Wrong number";
    cout << endl;

    // Check 5: print "level is low" only when level < 3. Here level is 8.
    int level = 8;
    if (level < 3);
    {
        cout << "Check 5: level is low" << endl;
    }

    return 0;
}
