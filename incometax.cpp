// Task: C1 - income tax program. Translate your B1 flowchart (Ch4, slides 48-49: sequence of statements).
// Name: WONG YAN KANG Matric: A26CS0465
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // TODO 1: declare name (string), monthlyIncome (double), numKids (int), tax (double)
    // TODO 2: for each "Get" box, print a prompt with cout, then read with cin
    // TODO 3: tax = 0.25 * (monthlyIncome * 11 - numKids * 450);
    // TODO 4: for the "Display" box, print the name and the tax with labels
   

    string name ;
    double monthlyIncome ;
    int numKids ;
    double tax ;

    cout << "enter your name :" ;
    cin >> name ;
    cout<< "enter your monthly income :" ;
    cin >> monthlyIncome ;
    cout << "enter your number of kids :";
    cin >> numKids ;

    tax = 0.25*(monthlyIncome * 11 - numKids * 450);
    cout<< "name :"<< name << endl ;
    cout <<"tax :"<< tax << endl ;

 return 0;
}
