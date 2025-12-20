#include <iostream>

using namespace std;

int main() {
    int FirstNumber, SecondNumber;
    char Operation;

    cout << "Enter first number: ";
    cin >> FirstNumber;
    cout << " \n Enter second number: ";
    cin >> SecondNumber;

    cout << " \n Enter operation (+, -, *, /): ";
    cin >> Operation;

    switch (Operation) {
        case '+':
            cout << " \n Result: " << FirstNumber + SecondNumber << endl;
            break;
        case '-':
            cout << " \n Result: " << FirstNumber - SecondNumber << endl;
            break;
        case '*':
            cout << " \n Result: " << FirstNumber * SecondNumber << endl;
            break;
        case '/':
            if (SecondNumber != 0) {
                cout << " \n Result: " << FirstNumber / SecondNumber << endl;
            } else {
                cout << " \n Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << " \n Invalid operation!" << endl;
    }
   
    return 0;
}
