#include <iostream>

using namespace std;

int main(){

    int Number;
    cout<<"Enter a Number Limit";
    cin>> Number;

    for(int i = 0 ; i <= Number ; i++){

        if(i % 3 == 0) {
            if( i % 5 != 0){
                cout<< "the multile of there is : " << i << endl ;

            }
        }
    }

}