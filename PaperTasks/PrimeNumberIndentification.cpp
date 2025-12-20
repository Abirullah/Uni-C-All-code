#include <iostream>

using namespace std;

int main(){

    bool isPrime = true

    int Number;
    cout<<"Enter a Number Limit";
    cin>> Number;

    for(int i = 1 ; i <  Number ; i++){

        if(Number % i == 0) {
            isPrime = false
        }
    }

    if (isPrime) cout << Number << " is prime Number";
    else cout << " Not a prime number";

}