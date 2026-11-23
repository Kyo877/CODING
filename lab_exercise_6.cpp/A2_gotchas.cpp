// Lab 6, Task A2: predict, then run. Write your predictions in README.md BEFORE you compile.
// Each line hides one "gotcha" from the cppreference pages you read in A1.
// Name: WONG YAN KANG Matric: A26CS0465
#include <iostream>
#include <cmath>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    cout << "1) " << toupper('a') << endl; //
    cout << "2) " << static_cast<char>(toupper('a')) << endl; //
    cout << "3) " << floor(-2.5) << " " << ceil(-2.5) << endl;
    cout << "4) " << round(2.5) << " " << round(-2.5) << endl;
    cout << "5) " << strcmp("tea", "tea") << endl;
    cout << "6) " << strlen("nasi lemak") << endl;
    cout << "7) " << (isdigit('5') != 0) << " " << (isdigit(5) != 0) << endl;
    cout << "8) " << (sqrt(2.0) * sqrt(2.0) == 2.0) << endl;
    return 0;
}
