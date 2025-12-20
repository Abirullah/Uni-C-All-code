#include <iostream>

using namespace std ;

int Generll;

void Pattren(){
	 for(int j=1; j<=Generll; j++){
            cout << Generll*j << " ";
        };
	
}



int main(){
	cout<<"Enter The Hiegist Number you want to go : ";
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
    	Generll = i;
       Pattren();
        cout << endl;
    }
    



   
    return 0;

}


