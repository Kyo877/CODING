#include <iostream> 
using namespace std ;

int main(){
    int integer ;
    int year ;

    cout<<"enter the integer : ";
    cin>>integer ;

    if(integer>0){
        cout<<integer<<" is positive"<< endl;
    }

    else if(integer==0){
        cout<<integer<<" is zero "<< endl ;
    }

    else{
        cout<<integer<<" is negative "<< endl;
    }

    if ( integer%2!=0){
        cout<<integer<<" is odd number "<<endl;
    }

    else {
        cout<<integer<<" is even number " << endl ;
    }

    cout<<"enter a year (1 or more ) : " <<endl ;
    cin>> year;

    if(year%2!=0){
        cout<<year<<" is a leap year"<< endl ;

    }

    else{
        cout<<year<<" is not a leap year"<< endl ;

    }

    return 0 ;

}