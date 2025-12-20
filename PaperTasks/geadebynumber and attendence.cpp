#include <iostream>

using namespace std;

int main(){
    // grade by stitch statment

    float number , attendence;

    float percentage;

    cout<<"Enter your number out of 500 : ";
    cin>>number;
    cout<<" \n Attendence : ";
    cin>>attendence;

 

    percentage = ((number / 500) * 100);

    if (attendence >= 90){
        percentage += 5;
    }

    
    if (percentage > 100){
        percentage = 100;
    }
    



    int Contion = percentage / 10;
    

  switch(Contion){
    case 10:
    case  9:
    cout <<"Your grade is A+";
    break;

     case  8:
    cout <<"Your grade is A";
    break;

     case  7:
    cout <<"Your grade is B";
    break;
    

     case  6:
    cout <<"Your grade is C";
    break;

     case  5:
    cout <<"Your grade is D";
    break;
    
    default :
    cout <<"Sorry Hebah is failed";

  }


}
