// Lab 5, Task A2: three loop bugs (Ch4, slides 62, 79-80, 91).
// The "guard" lines stop a runaway loop after 12 passes so your screen does not flood.
// Leave the guard lines in. A correct loop never trips its guard.
// Name:WONG YAN KANG Matric: A26CS0465
#include <iostream>
using namespace std;

int main()
{
    int guard;

    // Loop 1: print the even numbers from 10 down to 2, so: 10 8 6 4 2
    cout << "Loop 1:";
    int n = 10;
    guard = 0;
    while (n > 0)
    {
        guard++;
        if (guard > 12)
        {
            cout << " [guard] runaway loop stopped";
            break;
        }
        if (n % 2 == 1)
        {
            continue;
        }
        cout << " " << n;
        n = n - 1;
    }
    cout << endl;

    // Loop 2: add the whole numbers 1 to 5. Expected: total 15 from 5 terms.
    int total = 0;
    int terms = 0;
    for (int i = 1; i < 5; i++)
    {
        total = total + i;
        terms++;
    }
    cout << "Loop 2: total = " << total << " from " << terms << " terms" << endl;

    // Loop 3: count down 3... 2... 1... then print Go!
    cout << "Loop 3:";
    int seconds = 3;
    guard = 0;
    while (seconds > 0)
    {
        guard++;
        if (guard > 12)
        {
            cout << " [guard] runaway loop stopped";
            break;
        }
        cout << " " << seconds << "...";
    }
    cout << " Go!" << endl;

    return 0;
}
