#include <iostream>

using namespace std;

int main(){
   int Array[6][6];

   for (int i = 0 ; i< 6 ; i++){
    for (int j = 0 ; j< 6 ; j++){
        cout<<"Enter the valve at position "<< i+1 << " "<<j+1<<" :";
        cin>>Array[i][j];
    
   }
   }
   for (int i = 0 ; i< 6 ; i++){
    cout<<"----------------------------------------------"<<endl;
    for (int j = 0 ; j< 6 ; j++){
        cout<< "    |  "<<Array[i][j];
    
   }
   cout<<endl;
   }


}





