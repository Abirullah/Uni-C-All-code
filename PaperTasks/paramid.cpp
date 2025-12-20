#include <iostream>

using namespace std ;


int main(){

    
int number =0;
cout<<"enter the values of starts you want to print from start : " ;
cin>>number;

    for(int i = number ; i >= 1 ; i-=2){
    	
    //	int Number = 7 - i;
      // if(Number >=1)
        for (int k = 1 ; k<=number-i ; k++){
        	cout<<" ";
		}
    	
    	
       
        for(int j = 1 ; j <= i ; j++){        	
            cout << "*";
        
        }
     /*   	int Number2 = 7 - i;
        if(Number2 >=1)
        for (int k = 1 ; k<=Number2 ; k++){
        	cout<<" ";
		}
*/
        cout<<endl;
    }
}

