#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std ;

int main(){

    int dice1,dice2;
    int doubles =0 ;
    int mode ;

    cout<<"Mode (1 = test with seed 42 , 2 = play with the clock): ";
    cin>>mode ;

    while(mode!=1 && mode!=2){
        cout<<"invalid number , enter again ! " << endl;

        cout<<"Mode (1 = test with seed 42 , 2 = play with the clock): ";
        cin>>mode ;

    }

    if(mode==1)
    {
        srand(42);
    }

    else if(mode==2)
    {
        srand(time(0));
    }

    for (int i=0; i<1000;i++) 
    { 
        dice1=rand()%6+1 ;
        dice2=rand()%6+1 ;
    
    

    if(dice1==dice2)
    {
        doubles++;
    }

    }

    if (mode == 1){

   


    if(mode==2)

    {

    cout<<"doubles : " << doubles<<endl;

    }

    if(  doubles>=100 && doubles<=230){
        cout<<"check:OK " << endl ;
    }

    else{
      cout<<"check:NOT OK " << endl ;
    }

    return 0 ;
}