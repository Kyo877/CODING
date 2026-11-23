// Task: B2 - employee income tax: Tax = 0.25 * (monthly income * 11 - number of kids * 450).
// Name: WONG YAN KANG Matric: A26CS0465
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // TODO 1: define three named constants: TAX_RATE (0.25), MONTHS (11), RELIEF_PER_KID (450)
    //         e.g.  const double TAX_RATE = 0.25;
    // TODO 2: declare name (string), monthlyIncome (double), numKids (int), tax (double)
    // TODO 3: prompt for and read each value (one prompt before each cin)
    // TODO 4: calculate tax using the constants - no bare numbers in the formula
    // TODO 5: print "Employee: <name>" and "Tax: RM <tax>"
    
    const double TAX_RATE = 0.25;
    const int MONTHS = 11;
    const double RELIEF_PER_KID = 450.0;
    string name;
    double monthlyIncome;
    int numKids;
    double tax;

    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter monthly income: ";
    cin >> monthlyIncome;
    cout << "Enter number of kids: ";
    cin >> numKids;

    tax = TAX_RATE * (monthlyIncome * MONTHS - numKids * RELIEF_PER_KID);
    cout << "Employee: " << name << endl;
    cout << "Tax: RM " << tax << endl;
    
    return 0;
}
