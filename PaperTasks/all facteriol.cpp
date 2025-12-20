#include <iostream>

using namespace std;

int Even(int num){
	int facteriol = 1;
	for (int i = 1 ; i <= num ; i++) facteriol  = facteriol * i;
	
	cout << "Facteriol of Even Number "<<num << " is : " << facteriol << endl;
}

int Odd(int num){
	int facteriol = 1;
	for (int i = 1 ; i <= num ; i++) facteriol  = facteriol * i;
	
	cout << "Facteriol of odd Number "<<num << " is : " << facteriol<<endl;
}

int main(){
	int Number;
	cout<<"Enter the number to find the primes number : ";
	cin>>Number;
	
	for(int i = 2 ; i < Number ; i++){
		if(i % 2 == 0) Even(i);
		else Odd(i);
		}
		
	}

