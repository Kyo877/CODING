// Task: C2 - average of 15 numbers with a pre-test loop. Translate your B3 flowchart.
// Pattern: Ch4, slides 85-86 (while loop with a counter).
// Name: WONG YAN KANG Matric: A26CS0465
#include <iostream>
using namespace std;

int main()
{
    // TODO 1: declare sum (double), number (double), count (int), average (double)
    // TODO 2: set sum and count to 0 (initialisation box)
    // TODO 3: while (count < 15) { ...body from your flowchart... }   <- the Yes exit of the diamond
    //         Inside the body: prompt, read number, add to sum, add 1 to count
    // TODO 4: average = sum / 15; then display the average
    double sum,number,average;
    int count;
    sum=0;
    count=0;
    
   

    while(count<15)
    {
        cout << " enter 15 numbers : " << endl ;
        cin>> number ;
        sum= sum + number ;
        count++;

    }

    average = sum / 15;
    cout << "The average is: " << average << endl;

    return 0;
}