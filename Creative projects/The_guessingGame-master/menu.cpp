// making a simple menu 

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include "guessNumber.h"

void menu();
void guessNo();

int  main(){


menu();
 return 0 ;
}

void menu(){
  int choice;
do
  {
std::cout<<"0.New game of fun '\n'";
std::cout<<"1.exit '\n'";
std::cout<<"please type integer: "<<'\n';
std::cin>>choice;
  }
 while ( choice!=0 && choice!=1);
   
 switch( choice)
   {
     case 0:
       guessNo();
       case 1:
       break;
       default:
std::cout<<'\n'<<" 0.New game of fun '\n'";
std::cout<<"1.exit '\n'";
std::cout<<"please type integer: "<<'\n';
       
     
   }
 


}
