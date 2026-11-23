// Task: B1 - read the length and width of a rectangle, then print its area and perimeter.
// Name: WONG YAN KANG Matric: A26CS0465
#include <iostream>
using namespace std;

int main()
{
    // TODO 1: declare four double variables: length, width, area, perimeter
    // TODO 2: print a prompt, then read length and width with ONE cin statement
    // TODO 3: calculate area and perimeter
    // TODO 4: print "Area = ..." and "Perimeter = ..." on separate lines

    double length, width, area, perimeter;
    cout << "Enter length rectangle: ";
    cin >> length ;
    cout << "Enter width rectangle: ";
    cin >> width;
    area = length * width;
    perimeter = 2 * (length + width);
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
    return 0;
}
