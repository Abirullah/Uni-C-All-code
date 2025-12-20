#include <iostream>

using namespace std;

int main(){

 int Number  ;
 
 cout << "Enter a number : ";
 cin>> Number;


 switch (Number ){
    case (Number % 2 == 0) :
    cout << "The Given " << Number <<" is even " << endl;

    cout << "The Character of the given value " << Number << " Is " << Char(Number);
    break;
    default :
    cout << "The Given " << Number <<" is odd ";
    cout << "The Character of the given value " << Number << " Is " << Char(Number);


 }


}