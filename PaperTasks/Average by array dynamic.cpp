#include <iostream>

using namespace std ;

float AverageOfQuizes(){
	int NumberOfQuizes;
    cout<<"How Many quizes you have done Untail now : ";
    cin>>NumberOfQuizes;
    float  AllQuizesNumber[NumberOfQuizes];


    if(NumberOfQuizes < 1 || NumberOfQuizes > 10){
        cout<<"You enter unvalide number "<<endl;
        while(NumberOfQuizes < 1 || NumberOfQuizes > 10){
        	cout<<"Plz Enter Valide number : ";
        	cin>>NumberOfQuizes;
		}
    }

    float Sum = 0;

 
    for(int i = 0 ; i <=  NumberOfQuizes-1 ; i++){
        cout<<"Enter the numbers of : " << i+1 << " Quiz ";
        cin>>AllQuizesNumber[i];
        while(AllQuizesNumber[i] < 0 || AllQuizesNumber[i] > 30){
        	cout<<"Plz Enter Valide number : ";
        	cin>>AllQuizesNumber[i];
		}
        Sum +=AllQuizesNumber[i];
        
        if(AllQuizesNumber[i] < 10) 
         cout<<"Youe failed In Quiz No : "<< AllQuizesNumber[i] + 1<<endl;
    }

    return Sum/NumberOfQuizes;

}




int main(){

    cout<<"The Average of Quizes is : "<<AverageOfQuizes();



}


