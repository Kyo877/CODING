# include <iostream>
using namespace std ;

int main(){
    int number;
    int manynumber ;

    cout<< " enter a number for its table : ";
    cin>> number ;

    for(int i = 1 ; i<=10 ; i ++ ) {
        cout<< number << " x " << i << "="<< number * i << endl ;
    }

    cout<< " how many number ? ";
    cin>> manynumber ;

    if(manynumber<=0){
        cout<<"nothing to add " << endl ;

    }

    

    else{

        int count =1 ;
        int  sum =0 ;
        double  currentnumber ;
        double averange ;
        
        while(count<=manynumber){
        cout<<" number " << count << ":" ;
        cin>> currentnumber;
        sum +=currentnumber;
        count++;
        }

        averange= (sum*1.0)/manynumber ;

    

    
       cout<< " sum = " << sum << endl ;
        cout<< "averange:" << averange << endl ;
    }

    return 0 ;

}