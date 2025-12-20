#include <iostream>

using namespace std;

int main() {
    int Arry[30]= {12, 45, 23, 67, 34, 89, 90, 11, 10, 5,
                   78, 56, 43, 21, 9, 87, 65, 32, 54, 76,
                   88, 99, 100, 1, 2, 3, 4, 6, 7, 8};
    int GreaterNumber;
    int secondGreaterNumber;

    for (int i = 0; i < 30; i++) {
        if (i == 0) {
            GreaterNumber = Arry[i];
        } else {
            if (Arry[i] > GreaterNumber) {
                GreaterNumber = Arry[i];
            }
        }
    }
    
    for (int i = 0; i < 30; i++) {
        if (Arry[i] < GreaterNumber && Arry[i] > secondGreaterNumber) {
            secondGreaterNumber = Arry[i];
        }
    }
       


   
    return 0;
}