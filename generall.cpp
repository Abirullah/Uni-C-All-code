#include <iostream>

using namespace std ;

float AverageOfQuizes(){
        cout<<"How Many quizes you have done Untail now : ";
    cin>>NumberOfQuizes;
    int NumberOfQuizes[10];


    if(NumberOfQuizes < 1 && NumberOfQuizes > 10){
        cout<<"You enter unvalide number ";
        return 0;
    }

    float Sum = 0;

 
    for(int i = 0 ; i <=  NumberOfQuizes ; i++){
        cout<<"Enter the numbers of : " << i << " Quiz ";
        cin>>NumberOfQuizes[i];

        Sum +=NumberOfQuizes[i]
    }

    return sum/NumberOfQuizes;

}




int main(){

    cout<<"The Average of Quizes is : "<<AverageOfQuizes();



}

