// Task: C2 - read an int, a double, a char, a C-string and a string, then print them back (Ch3, slide 43).
// Type fewer than 20 characters for the C-string: arrays and their limits come in Week 9.
// Name: WONG YAN KANG Matric: A26CS0465
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count ;
    double demical ;
    char single ;
    char word[21];
    string name ;

    cout<< "enter the integer :";
    cin>>count;
    cout<< "enter the decimal :";
    cin>> demical;
    cout<< "enter the single character :";
    cin>> single ;
    cout<< "enter the word :";
    cin>> word ;
    cout<< "enter the name :";
    cin>> name ;
   
    cout<<"*******************************************"<<endl;

   cout<< "the integer is :"<<count<< endl;
    cout<< "the decimal is :"<<demical<< endl;
    cout<< "the single character is :"<<single<< endl;
    cout<< "the word is :"<<word<< endl;
    cout<< "the name is :"<<name<< endl;

    // TODO 1: declare  int count;  double decimal;  char single;  char word[21];  string name;
    // TODO 2: prompt for and read each one, in that order
    // TODO 3: print all five values back, one per line, with labels
    return 0;
}
