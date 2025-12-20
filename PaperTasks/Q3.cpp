#include <iostream>

using namespace std;

int main(){

 int Number  ;
  
 
 cout << "Enter a number : ";
 cin>> Number;
 
 char character = char(Number);
 
 cout<< character;
 
 int Decision =  1 + (Number % 2);
 


 switch (Decision){
    case  1 :
    cout << "The Given " << Number <<" is even " << endl;
    cout << "The Character of the given value " << Number << " Is " << char(Number);
    break;
    
    default :
    cout << "The Given " << Number <<" is odd " << endl;
    cout << "The Character of the given value " << Number << " Is " << char(Number);


 }


}
