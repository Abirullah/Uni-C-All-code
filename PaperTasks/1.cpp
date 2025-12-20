#include <iostream>
using namespace std;

int main (){
	float BillBalance, UnPaidBalence , PrivousMonthReading , CurrentMonthReading , NewReading;
	
	cout<<"Enter The Unpaid Balence  = " ;
	cin>> UnPaidBalence;
	
	cout<<"/n Enter The Privous Month Reading = " ;
	cin>> PrivousMonthReading;
	
	cout<<"/n Enter Current Month Reading  = " ;
	cin>> CurrentMonthReading;
	
	NewReading = CurrentMonthReading - PrivousMonthReading;
	
	if(UnPaidBalence > 0 ){
	   BillBalance = 	UnPaidBalence  + 50 + 350 + (NewReading/1000)*100;
	   
	   cout<<"/n The Bill Balence Is = " << BillBalance;
	}
	else{
	   BillBalance = 350 + (NewReading/1000)*100;
	   
	   cout<<"/n The Bill Balence Is = " << BillBalance;	
	}
	return 0;
	
	
}