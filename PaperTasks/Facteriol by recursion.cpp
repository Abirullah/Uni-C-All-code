#include <iostream>

using namespace std ;

   
int calculateFacteriol(int number , int facteriol , int recursion ){
	                                
   
    facteriol = facteriol * recursion;
    recursion++;

    if(recursion <= number){
        calculateFacteriol(number, facteriol , recursion );
        
    }
    else{
         return facteriol;
    }


}


int main(){
	
     int number;
     int facteriol = 1;
     int recursion = 1;

    cout<<"Enter the value to calculate the facteriol : ";
    cin>>number;

 cout<<"The facteriol of "<<number<<" is "<< calculateFacteriol(number , facteriol , recursion );

 return 0;
}


