#include <iostream>

using namespace std ;

int Add(){
	int num1,num2;
     cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
 cout << "Result: " << num1 + num2 << endl;
 return 0;
}
int Subtract(){
		int num1,num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
 cout << "Result: " << num1 - num2 << endl;
 return 0;
}
int Multiply(){
		int num1,num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
 cout << "Result: " << num1 * num2 << endl;
 return 0;
}
int Divide(){
		int num1,num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    if(num2 != 0){
        cout << "Result: " << num1 / num2 << endl;
    } else {
        cout << "Error: Division by zero!" << endl;
    }
 return 0;
    
}


int main(){
    char operation;

   
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    

    switch(operation){
        case '+':
             Add();
            break;
        case '-':
             Subtract();
            break;
        case '*':
              Multiply() ;
            break;
        case '/':
             Divide() ;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;

   
    
}


