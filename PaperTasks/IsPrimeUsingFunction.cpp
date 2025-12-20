#include <iostream>

using namespace std ;

bool IsPrime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i  < number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}


int main(){

    int number;

    cout<<"Enter a number to find that Is It prime or not : ";

    cin>>number;
    if(IsPrime(number)){
        cout<<number<<" is a prime number."<<endl;
    } else {
        cout<<number<<" is not a prime number."<<endl;
    }
   

}


