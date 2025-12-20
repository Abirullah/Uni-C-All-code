#include <iostream>

using namespace std ;

int TotalPapers(){
    return 3 ;
}

int TotalMarks ( int Physics , int Chemistry , int Mathematics ){

    int total = Physics + Chemistry + Mathematics ;
    return total ;

    
}


float Average (int Physics , int Chemistry , int Mathematics ){

    float avg = (Physics + Chemistry + Mathematics) / 3.0 ;

    cout<<"The Total Marks Obtained is : " << TotalMarks ( Physics , Chemistry , Mathematics ) << " In " << TotalPapers() << " Papers "<< endl ; 
    return avg ;

    
}



int main(){

    int Physics , Chemistry , Mathematics ;
    cout << " Enter Marks of Physics : " ;
    cin >> Physics ;
    cout << " Enter Marks of Chemistry : " ;
    cin >> Chemistry ;
    cout << " Enter Marks of Mathematics : " ;
    cin >> Mathematics ;
    cout << " The Average Marks Obtained is : " << Average ( Physics , Chemistry , Mathematics ) << endl ;
 
    return 0;

}


