#include<iostream>
#include<cstdlib>
using namespace std ;

int main(){

    char text[50];
    

    while (true){

    cout<< "enter text to convert(quit to stop )";
    cin.getline(text,50);

   if(strcmp(text,"Quit")==0 || strcmp(text,"quit")==0){
    break;
   }

   else{
    cout<<"atoi gives" << atoi(text)<<endl;
    cout<<"atof gives" << atof(text)<<endl;
   }
   }
   return 0 ;
}