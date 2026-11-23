//Task: add two prices and show the total and the average. 
// Name: WONG YAN KANG  Matric: A26CS0465
#include <iostream>
using namespace std;

int main() {
    int priceA, priceB, total;
    priceA = 3;
    priceB = 4;
    total = priceA + priceB;
    cout << "The total is RM " << total << endl;
    double average = total / 2.0;
    cout << "The average is RM " << average << endl;
    return 0;
}
