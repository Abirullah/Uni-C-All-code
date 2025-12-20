#include <iostream>

using namespace std ;

int Facterioal(int n){
	int Facteriol = 1;
	
	while (n>0){
		Facteriol = Facteriol * n ;
		n--;
	}
   

    return Facteriol;
}



int main(){

    int number;

    cout<<"Enter a number to find factorial: ";

    cin>>number;

    int result = Facterioal(number);

    cout<<"Factorial of "<<number<<" is "<<result<<endl;

    return 0;

   

}
