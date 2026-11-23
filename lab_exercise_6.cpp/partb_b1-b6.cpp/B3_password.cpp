#include <iostream>
#include<cstring>
#include <cctype>
using namespace std ;

int main () {

    char password[50];
    bool upper = false;
    bool lower = false;
    bool punctuation = false;
    bool digit =false;
    bool lengthgood = false ;
    

    int count = 0;


    cout<<" please enter a password (up to 49 character )";
    cin.getline(password,50);

    int length = strlen (password ) ;

    if(length>=8){
    lengthgood=true;
    count++;
    }

    for (int i = 0 ; i < length ; i ++){

    unsigned char ch = static_cast<unsigned char>(password[i]);

    if(isupper(ch)){
        upper=true;
    }

    if(islower(ch)){
        lower=true;
    }

    if(isdigit(ch)){
        digit=true;
    }

    if(ispunct(ch)){
        punctuation=true;
    }
    }

    if(upper) count++;
    if(lower) count++;
    if (digit) count++;
    if(punctuation)count++;

    cout << "At least 8 characters: "
    << (lengthgood ? "PASS" : "FAIL") << endl;

    cout << "Upper-case letter: "
    << (upper ? "PASS" : "FAIL") << endl;

    cout << "Lower-case letter: "
    << (lower ? "PASS" : "FAIL") << endl;

    cout << "Digit: "
    << (digit ? "PASS" : "FAIL") << endl;

    cout << "Punctuation: "
    << (punctuation ? "PASS" : "FAIL") << endl;

    
    
    if (count == 5) {
        cout << "Strength: Strong";
    }
    else if (count >= 3) {
        cout << "Strength: Medium";
    }
    else {
        cout << "Strength: Weak";
    }

    cout << " (" << count << " of 5 rules passed)" << endl;

    return 0;
}






