#include<iostream>
using namespace std ;

int main(){
    
    int i ;
    int j ;
    int row = 0;


    cout<< " how many row you want ? ";
    cin >> row ;


    for(i=1;i<=row;i++){

        for(j=1;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;

    }

    return 0 ;

}