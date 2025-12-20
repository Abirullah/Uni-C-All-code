#include <iostream>
using namespace std;

int main (){
	int NoiseInDB;
         cout<<"Enter The Noise In DB = " ;
	cin>> NoiseInDB;
	
	
	
	if( NoiseInDB < 50 ){	   
	   cout<<"\n  Quite ";
	   return 0 ;
	}
	if( NoiseInDB < 70 ){	   
	   cout<<"\n  Intrusive ";
	   return 0;
	}
	if( NoiseInDB < 70 ){	   
	   cout<<"\n  annoying ";
	   return 0;
	}
	if( NoiseInDB < 90 ){	   
	   cout<<"\n  very annoying ";
	   return 0;
	}
	else{
		cout<< "\n  uncomfortable ";
	}
	
	   
}
	
