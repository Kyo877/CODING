// Task: A2 - operator precedence and integer division. Predict every line BEFORE you run it.
// Sources: Ch3 slide 83 (1a, 1b), slide 96 (2a, 2b), slides 78-80 (3a-3d),
//          slide 108 (4a-4f), slides 104 and 107 (5a, 5b).
// Name: WONG YAN KANG Matric: A26CS0465
#include <iostream>
using namespace std;

int main()
{
    // Puzzle 1: precedence
    int y = -5;
    int z = 8 - 3 + 9 / 2 + 2 * -y;  // 8 - 3 + 4 + 10 = 19
    cout << "1a: z = " << z << endl;
    z = 8 - (3 + 9 / 2) + 2 * -y;    // 8 - (3 + 4) + 10 = 11
    cout << "1b: z = " << z << endl;

    // Puzzle 2: postfix and prefix decrement
    int kira = 5;
    int nilai_pertama = 10;
    int nilai_kedua = 5 * kira-- + nilai_pertama; // 5 * 5 + 10 = 35, kira = 4
    cout << "2a: nilai_kedua = " << nilai_kedua << ", kira = " << kira << endl;
    nilai_kedua = 5 * --kira + nilai_pertama; // 5 * 3 + 10 = 25, kira = 3
    cout << "2b: nilai_kedua = " << nilai_kedua << ", kira = " << kira << endl;

    // Puzzle 3: division and remainder
    cout << "3a: 13 / 5 = " << 13 / 5 << endl; // 13 / 5 = 2
    cout << "3b: 13 % 5 = " << 13 % 5 << endl;// 13 % 5 = 3
    cout << "3c: 7 / 2 * 2.0 = " << 7 / 2 * 2.0 << endl;      // 7 / 2 * 2.0 = 3 * 2.0 = 6
    cout << "3d: 2.0 * 7 / 2 = " << 2.0 * 7 / 2 << endl; // 2.0 * 7 / 2 = 14.0 / 2 = 7

    // Puzzle 4: each expression starts again from a = 1 and d = 1.0
    int a = 1;
    double d = 1.0;
    a = 46 / 9; // 46 / 9 = 5
    cout << "4a: a = " << a << endl;
    a = 1;
    a = 46 % 9 + 4 * 4 - 2; // 46 % 9 = 1, 4 * 4 = 16, 1 + 16 - 2 = 15
    cout << "4b: a = " << a << endl;
    a = 1;
    a = 45 + 43 % 5 * (23 * 3 % 2); // 43 % 5 = 3, 23 * 3 = 69, 69 % 2 = 1, so a = 45 + 3 * 1 = 48
    cout << "4c: a = " << a << endl;
    a = 1;
    a %= 3 / a + 3;
    cout << "4d: a = " << a << endl;
    a = 1;
    d += 1.5 * 3 + (++a); // 1.5 * 3 = 4.5, ++a = 2, so d = 1.0 + 4.5 + 2 = 7.5, a = 2
    cout << "4e: d = " << d << ", a = " << a << endl; // d = 7.5, a = 2
    a = 1;
    d = 1.0;
    d -= 1.5 * 3 + a++; 
    cout << "4f: d = " << d << ", a = " << a << endl; // 1.5 * 3 = 4.5, a++ = 1, so d = 1.0 - (4.5 + 1) = -4.5, a = 2

    // Puzzle 5: multiple and combined assignment
    int x;
    int p;
    int q;
    x = p = q = 5;
    cout << "5a: x + p + q = " << x + p + q << endl; // x + p + q = 5 + 5 + 5 = 15
    int i = 10;
    int j = 2;
    i *= j + 3;
    cout << "5b: i = " << i << endl; // i = 10 * (2 + 3) = 10 * 5 = 50
    return 0;
}