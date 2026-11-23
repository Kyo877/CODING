#include<iostream>
#include <cstring>
#include<cctype>
using namespace std ;

int main (){

    char word[50] ;
    char copy[50] ;
    int k = 0 ;
    char reverse[50];

    cout<<"enter a word :" ;
    cin.getline(word,50);

    strcpy(copy,word);
    
    int length = strlen(copy);

    for (int i=0 ; i<length ; i ++ ){

        copy[i]=toupper(copy[i]);
    }

    for(int j =length-1 ; j>=0 ; j--){

        reverse[k]=copy[j];
        k++;

    }
    
    reverse[length]='\0';

   
    if(strcmp(copy,reverse)==0){
        cout<<word<<"is a palindrome"<< endl ;
    }

    else{
        cout<<word<<" is not a palindrome"<< endl ;
    }
    
    return 0 ;

    

    
}