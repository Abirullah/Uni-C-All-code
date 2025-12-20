#include <iostream>

using namespace std ;


int main(){

    //*
    //***
    //*****
    //*******


    for(int i = 7 ; i >= 1 ; i-=2){
    	
    	int Number = 7 - i;
        if(Number >=1)
        for (int k = 1 ; k<=Number ; k++){
        	cout<<" ";
		}
    	
    	
       
        for(int j = 1 ; j <= i ; j++){        	
            cout << "*";
        
        }

        cout<<endl;
    }
}

