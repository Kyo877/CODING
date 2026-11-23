#include<iostream>
using namespace std ;

int main() {

    int score; 
    


    cout <<" enter the score (0 to 100) : " ;
    cin >>score;

    while (score < 0 || score > 100) {
        cout << "please enter the valid score ! ";
        cin >> score;
    }

    if(score >= 90 && score <= 100){
        cout<< "grade : A " << endl ;
        cout << "excellent ! " <<endl;
    }

     else if(score>75 && score<91){
        cout<< "grade : B " << endl ;
        cout << "good job  ! "<<endl;
    }

     else if(score>60 && score<76 ){
        cout<< "grade : C " << endl ;
        cout << "nice try  ! "<<endl;
    }

     else if(score>50 && score < 61 ){
        cout<< "grade : E " << endl ;
        cout << "pass ! "<<endl;
    }

     else if(score>=0 && score<51 ){
        cout<< "grade : F " << endl ;
        cout << "not pass ! "<<endl;
    }

    

   return 0 ;

}