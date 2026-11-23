// Task: B4 - sizeof and limits of the basic types, plus wrap-around (overflow) demonstrations.
// Limits come from <climits> (CHAR_MIN, SHRT_MAX, INT_MAX, LONG_MAX ...) and <cfloat> (FLT_MAX, DBL_MAX).
// Name: WONG YAN KANG Matric: A26CS0465
#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;

int main()
{
    
    cout << "char   : " << sizeof(char) << " byte(s), range " << CHAR_MIN << " to " << CHAR_MAX << endl;
    cout << "short  : " << sizeof(short) << " byte(s), range " << SHRT_MIN << " to " << SHRT_MAX << endl;
    cout << "int    : " << sizeof(int) << " byte(s), range " << INT_MIN << " to " << INT_MAX << endl;
    cout << "long   : " << sizeof(long) << " byte(s), range "<< LONG_MIN << " to " << LONG_MAX << endl;
    cout << "float  : " << sizeof(float) << " byte(s), range " << -FLT_MAX << " to " << FLT_MAX << endl;
    cout << "double : " << sizeof(double) << "byte(s), range " << -DBL_MAX << " to " << DBL_MAX << endl;
    cout << "bool   : " << sizeof(bool) << " byte(s), values false and true" << endl;
    // TODO 1: add one line each for int, long, float, double (use -FLT_MAX and FLT_MAX for float)
    // TODO 2: add a line for bool: its size, and the values false and true

    cout << "075 -> " << 075 << ", 0x75A -> " << 0x75A << ", 1234L -> " << 1234L << endl;
    // TODO 3: print the literals 075, 0x75A and 1234L. Predict the three numbers first.
    
    unsigned char level = 254;
    level++; cout << "level + 1: " << static_cast<int>(level) << endl;
    level++; cout << "level + 1: " << static_cast<int>(level) << endl;
    level++; cout << "level + 1: " << static_cast<int>(level) << endl;
    level = 0;
    level--; cout << "level - 1: " << static_cast<int>(level) << endl;
    // TODO 4: unsigned char level = 254; then add 1 to it three times, printing
    //         static_cast<int>(level) after each addition. Then set level = 0, subtract 1, print.
   
   short small = 32767;
   small++;
   cout << "small + 1: " << small << endl;
    // TODO 5: short small = 32767; add 1; print small.

    return 0;
}