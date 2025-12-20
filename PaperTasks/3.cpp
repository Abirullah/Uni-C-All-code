#include <iostream>
using namespace std;

int main (){
	
	int Age ;
	char Status;
	
	
	cout<<"Enter  your materal status if married (y) else (n)= " ;
	cin>> Status;
	
   if(Status == 'n'){
   	
   	cout<<"Enter Age = " ;
	cin>> Age;
	
	if(Age > 17){
		if(Age < 26 ){
		 cout<<" you are Eglagable " ;	
		}
		else{
		   cout<<" sorry you are exceded the limit " ;	
		}
	}
	else{
		cout<<" sorry you are below the limit " ;
		
	}
     }
    else{
		cout<<" sorry you are married " ;
		
	}
    

}
