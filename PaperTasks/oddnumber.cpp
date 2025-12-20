#include <iostream>

using namespace std;

int main(){
    
   int totalSum = 0;

    for(int i = 1 ; i <= 30 ; i++){

        if(i % 2 != 0){
            cout<< i << "and there squar is = " << i * i << endl;

            totalSum += (i * i)
        }
    }

    cout<<"there totle sum is = " << totalSum;
}