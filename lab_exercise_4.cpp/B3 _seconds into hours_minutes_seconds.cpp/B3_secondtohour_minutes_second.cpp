// Task: B3 - convert a number of seconds into hours, minutes and seconds using / and %.
// Name: WONG YAN KANG Matric: A26CS0465
#include <iostream>
using namespace std;

int main()
{
    // TODO 1: declare totalSeconds, hours, minutes, seconds (all int)
    // TODO 2: prompt for and read totalSeconds
    // TODO 3: hours   = how many whole 3600s fit in totalSeconds       (use /)
    // TODO 4: minutes = how many whole 60s fit in what is left         (use % then /)
    // TODO 5: seconds = what is left after removing whole minutes      (use %)
    // TODO 6: print e.g.  3725 seconds = 1 h 2 min 5 s

    int totalSeconds, hours, minutes, seconds;
    cout << "Enter total seconds: ";
    cin >> totalSeconds;
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds =(totalSeconds % 3600) % 60;
    cout << totalSeconds << " seconds = " << hours << " h " << minutes << " min " << seconds << " s" << endl;
    return 0;
}
