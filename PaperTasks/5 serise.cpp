#include <iostream>

using namespace std;

int main(){

int number = 5 ;
float  Target = 9;

for (float i = 1 ; i <= Target ; i++){
	
	cout << number  <<" ";
	
	
	if ( i <= Target/2) number += 5;
	else number -= 5;
	
	
}

}
