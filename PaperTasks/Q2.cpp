#include <iostream>

using namespace std;

int main(){

    float UserAgeInGeorgenCalender ,  UserAgeInHijriCalender , AgesIndaysInGeorgenCalender ;




    cout<<"Enter Your Age In Georgian : ";
    cin>> UserAgeInGeorgenCalender;

    AgesIndaysInGeorgenCalender =  UserAgeInGeorgenCalender * 365 ;


    UserAgeInHijriCalender  = AgesIndaysInGeorgenCalender / 355;


    cout<< "Your Age In Hijri Calender Is : " <<UserAgeInHijriCalender;











         

}
