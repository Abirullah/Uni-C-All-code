#include <iostream>

using namespace std ;

int result = 0,num, originalNum, remainder , NumberOfReminders = 0;

void ArmstrongNumber(){
	remainder = originalNum % 10;
	int Generall = 1;
	for(int i=1 ; i<= NumberOfReminders ; i++){
		Generall *= remainder;

	}
	
        result += Generall;
        originalNum /= 10;
	
}



int main(){
    cout << "Enter an integer: " ;
    cin >> num;
    originalNum = num;
    
    
    while (originalNum != 0){
    	int GenerallNumber = num;
    	int Numbers = 0;
        while (GenerallNumber != 0){
     	Numbers++;
     	GenerallNumber /= 10;
     	
        }
    NumberOfReminders = Numbers;
    
        ArmstrongNumber();
    }
    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;


    return 0;

}

