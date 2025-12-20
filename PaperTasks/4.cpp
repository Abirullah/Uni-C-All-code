#include <iostream>
using namespace std;

int main (){
	int y , x ;
	cout<<"Enter The value for x cordinate  = " ;
	cin>> x;
	
	cout<<"Enter The value for y cordinate  = " ;
	cin>> y;
	
	if (x > 0){
		if(y > 0){
			cout<<"you are in 1st cordinate  " ;	
		}
		if(y < 0){
			cout<<"you are in 4th cordinate  " ;	
		}
	}
	if (x < 0){
		if(y < 0){
			cout<<"you are in 3rd cordinate  " ;	
		}
		if(y > 0){
			cout<<"you are in 2nd cordinate  " ;	
		}
	}
         if(x == 0){
         	if(y < 0){
			cout<<"you are in on the negative side of vertical line  " ;	
		}
		if(y < 0){
			cout<<"you are in on the positive side of vertical line " ;	
		}
		if (y == 0){
			cout<<"you are in on the origin  " ;
		}
	}
	
	if(y == 0){
         	if(x < 0){
			cout<<"you are in on the negative side of horizantal line  " ;	
		}
		if(x < 0){
			cout<<"you are in on the positive side of horizantal line  " ;	
		}
	}

}
