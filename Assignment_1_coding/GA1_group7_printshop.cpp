#include<iostream>
using namespace std ;

int main() {

    const int morethan200=6 ;
    const int morethan50=8;
    const int morethan0=10 ;
    const int colourextra40=40;
    const int mincharge100=100;

    
    int totalpages;
    int pages;
    int copies;
    char mode ;
    int average ;


    int money =0 ;
    int totalmoney =0;
    int highestbill=0;
    int count =0 ;

    // Add before: cout<<"Pages (0 to stop) : "; 
    cout << "=================================================\n";
    cout << "      🌟 WELCOME TO GROUP 7 PRINT SHOP 🌟       \n";
    cout << "=================================================\n\n";

    cout<<"Pages (0 to stop) : ";
    cin >> pages ;

    while(pages!=0){

        while (pages<0){
            cout<<"please insert valid pages ! : ";
            cin>> pages ;
        }

        if  (pages==0){
           break ;
        } 
       
        
        cout << "Copies : ";
        cin>>copies;



        while(copies<1){
            cout<<"Copies must be 1 or more . Copies : ";
            cin>>copies ;
        }

        totalpages = pages * copies ;

        cout<< "Mode [b/c] : ";
        cin>>mode;
        
        while(mode!='b' && mode!='B' && mode!='C' && mode!='c'){
        cout<<"Mode must be b or c (b/c) : ";
        cin>>mode;
        }

        if(totalpages>200){
            money=totalpages*morethan200;
        }

        else if (totalpages>50){
            money=totalpages*morethan50;
        }

        else {
            money=totalpages*morethan0;
        }


        if(mode == 'c'|| mode == 'C'){
            money= money+(totalpages*colourextra40);
        }

        if(money<mincharge100){
            money=mincharge100 ;
        }
        
         money=((money+2)/5)*5 ;

         cout<< "cost : RM " << money/100.0 << endl ;

        count++;
        totalmoney = totalmoney + money;
        if (money > highestbill ){
            highestbill=money ;
        }

        cout<<endl ;

        cout<<"Pages (0 for stop ) : ";
        cin>>pages ;
    }
    
    cout<< endl;
    cout<<"SUMMARY OF SCSE1013_ASSIGNMENT1_PRINTSHOP"<<endl;
    cout<<"-----------------------------------------"<<endl;

    if (count>0){
    cout<< "total jobs  📝    : "<<count<<endl;
    cout<<"total sales 💵    : RM "<<totalmoney/100.0<<endl;
    average = totalmoney / count ;
    average= ((average + 2)/ 5) * 5 ;
    cout<<"averange spend 📈 : RM "<<average/100.0 <<endl;
    cout<< "highest bill 🏆   : RM "<< highestbill/100.0 << endl;
    }

    else {
        cout<<"No jobs today ."<< endl; 
    }

    
    cout << "\n=================================================\n";
    cout << " ✨ THANK YOU FOR VISITING! PLEASE COME AGAIN! ✨ \n";
    cout << "=================================================\n\n";

    return 0 ;

}