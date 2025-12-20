#include <iostream>

using namespace std;

int main(){
	
	for(int i= 8 ; i>=1;i--){
		cout<<"*";
		if (i!=8 && i!=1)
		for(int j = 1 ; j <= 6 ; j++){
			cout<<" ";
		}
		else for(int k = 1 ; k <= 6 ; k++){
			cout<<"*";
		}
		
		cout<<"*"<<endl;
	}
}
