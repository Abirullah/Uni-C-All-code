#include <iostream>

using namespace std ;

int HelloNumbersPrinted = 0;

void PrintHello(){
   
        cout<<HelloNumbersPrinted<<" : Hello"<<endl;
        HelloNumbersPrinted++;
   
   if(HelloNumbersPrinted < 10)
   PrintHello();
    

}


int main(){

 PrintHello();

 return 0;
}


