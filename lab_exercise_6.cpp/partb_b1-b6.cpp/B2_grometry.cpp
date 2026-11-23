#include <iostream>
#include<cmath>
using namespace std ;

int main(){

    int pointAx ;
    int pointAy ;
    int pointBx ;
    int pointBy ;
    int radius ;
    double area ;
    double pi ;
    double d ;
    

    cout<< " enter point A (x y ): " ;
    cin>>pointAx>>pointAy;


    cout<< " enter point B (x y ): " ;
    cin>>pointBx>>pointBy;

    d= sqrt(pow(pointBx-pointAx,2)+pow(pointBy-pointAy , 2));
    
    cout<<" the distance between A and B : "<<d<<endl;

    cout<< " enter a circle radius : ";
    cin>>radius ;

    while(radius<0){
        cout<<" the radius with negative is not acceptable , please enter again ! "<<endl;

        cout<< " enter a circle radius : " ;
        cin>>radius ;
    }

    pi=acos(-1.0);

    area=double(pi*(pow(radius,2)));

    cout<<" the area circle is : "<<area<< endl;

    return 0 ;




}