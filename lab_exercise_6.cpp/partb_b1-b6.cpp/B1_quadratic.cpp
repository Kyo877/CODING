#include <iostream>
#include <cmath>
using namespace std ;

int main (){
    int a ;
    int b ;
    int c ;
    double discriminant ;
    double value1 ;
    double value2;
    

    cout<<"please enter the value a , b, c :";
    cin>> a ;
    cin>> b ;
    cin>> c ;


   

    if(a==0){
        cout<<"the number you put is invalid " << endl ;
    }

    

   
    else{

    discriminant = (b*b) - (4*a*c) ;
   
    cout<<"discriminant ="<<discriminant << endl ;

    
   if(discriminant<0){
        cout<<"not real roots";
    }

   
   
    else if (discriminant==0){

        value1= (-b + sqrt(discriminant)) / (2 * a);
    
        cout<<"one real root : " << "x1=" << value1 << endl ;
        
    }

    else{

        value1= (-b + sqrt(discriminant)) / (2 * a);
        value2= (-b - sqrt(discriminant)) / (2 * a);

        cout<<"two real roots : "<< "  x1=" << value1 <<"   x2="<<value2 << endl ;
    }
    }


    return 0 ;


}