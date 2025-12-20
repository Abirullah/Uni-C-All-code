#include <iostream>
using namespace std;

int main() {
   // by while loop
    int number;
    bool isPrime = true;
    cout << "Enter a positive integer: ";
    cin >> number;
    while (number <= 1) {
        isPrime = false;
        break;
    }
    int i = 2;
    while (i <= number / 2) {
        if (number % i == 0) {
            isPrime = false;
            break;
        }
        i++;
    }
    if (isPrime)
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;
    

    return 0;
}