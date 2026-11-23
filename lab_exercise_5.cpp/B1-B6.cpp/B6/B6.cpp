#include <iostream>
using namespace std;

int main(){

    int number;
    int count=0 ;
    int sum=0 ;
    double averange ;
    


    cout<< "enter a positif number (-1 to stop ) : " ;
    cin>> number ;

    while(number!=-1){

        while(number<-1 || number==0){
            cout<<number<<" is not positive , skipped . "<<endl;
            cout<<"enter a positif number (-1 to stop): ";
            cin>>number; 
            
            if(number==-1){
                break;
            }
         
        }


          
            count=count+1;
            sum = sum+number;

            cout<< "enter a positif number (-1 to stop ) : " ;
            cin>> number ;

    }

       
     if(count>0){

       
       averange= (double)sum/count;

       cout<<"count ="<<count<<endl ;
       cout<<"sum ="<<sum<<endl ;
       cout<<"averange ="<<averange<<endl ;
      }

       else{
        cout<<"not valid numbers were entered "<<endl;
       }

       return 0 ;

}
       