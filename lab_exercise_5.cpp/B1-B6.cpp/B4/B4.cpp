#include <iostream>
using namespace std ;

int main(){
    
    int choice ;
    int total =0 ;
    
    do{
    cout <<"===UTM Cafe==="<< endl ;
    cout <<"1. Nasi Lemak RM 4"<< endl ;
    cout <<"2. Mee Goreng RM 5"<< endl ;
    cout <<"3. Roti Canai RM 2"<< endl ;
    cout <<"4. Teh Tarik  RM 3"<< endl;
    cout <<"5. pay and exit "<< endl;

    do{
    cout<< " choice (1-5)" << endl;
    cin>> choice;
    if (choice < 1 || choice > 5) {
    cout << "Invalid choice. Please enter 1 to 5." << endl;
    }
    

    }while(choice < 1 || choice > 5);

    

      if (choice == 1) {
            cout << "Added Nasi lemak." << endl;
            total += 4;
        } 
        
       else if (choice == 2) {
            cout << "Added Mee goreng." << endl;
            total += 5;
        } 
        
        else if (choice == 3) {
            cout << "Added Roti canai." << endl;
            total += 2;
        } 
        
        else if (choice == 4) {
            cout << "Added Teh tarik." << endl;
            total += 3;
        }

       
    }

    while (choice != 5);


   
    cout<<"total to pay : RM  " << total ;

    return 0 ; 
 
    
}
