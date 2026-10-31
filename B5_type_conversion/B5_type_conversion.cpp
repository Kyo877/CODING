// Task: B5 - type conversion: a correct average of three ints and the ASCII code of a char.
// Name: WONG YAN KANG Matric: A26CS0465
#include <iostream>
using namespace std;

int main()
{
    // TODO 1: declare three int variables and an int sum; read the three numbers with one prompt
    // TODO 2: print sum / 3 and label it "Average without a cast"
    // TODO 3: print static_cast<double>(sum) / 3 and label it "Average with static_cast"
    // TODO 4: declare a char, read one letter, print the letter and static_cast<int>(letter)
    // TODO 5: print the NEXT letter: static_cast<char>(letter + 1)

    int num1 , num2, num3, sum ;
    cout<< "enter the three numbers :";
    cin>> num1 >> num2 >> num3 ;
    
    sum = num1 + num2 + num3;
    cout << "Average without a cast: " << sum / 3 << endl;
    cout << "Average with static_cast: " << static_cast<double>(sum) / 3 << endl;
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    cout << "Letter: " << letter << endl;
    cout << "ASCII code: " << static_cast<int>(letter) << endl;
    cout << "Next letter: " << static_cast<char>(letter + 1) << endl;
    return 0;
}
