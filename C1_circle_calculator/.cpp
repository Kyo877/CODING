// Task: C1 - circle calculator. PI is a named constant: const double PI.
// Save a second copy as C1_circle_define.cpp and use #define PI instead.
// Name:WONG YAN KANG Matric: A26CS0465
#include <iostream>
using namespace std;

int main()
{
        const double PI = 3.14159 ;
        double radius , diameter, circumference, area ;
        cout<< "please enter the radius of circle :" ;
        cin>>radius;
        diameter = radius*2;
        circumference = 2 * PI * radius;
        area = PI * radius * radius;
        cout << "Diameter of circle is : " << diameter << endl;
        cout << "Circumference of circle is : " << circumference << endl;
        cout << "the area of circle is :"<<area<< endl ;

    // TODO 1: const double PI = 3.14159;
    // TODO 2: declare radius, diameter, circumference, area (double)
    // TODO 3: prompt for and read the radius
    // TODO 4: diameter = 2 * radius;  circumference = 2 * PI * radius;  area = PI * radius * radius  (no pow yet)
    // TODO 5: print the three results, one per line, with labels, using cout only
    return 0;
}
