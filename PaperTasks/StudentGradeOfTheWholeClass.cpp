#include <iostream>
#include <iostream>

using namespace std;

int main() {
	


    int totalStudents ;
    
    cout<<"Enter Number Of Totle Studenyts : ";
    cin>>totalStudents;

    float marks[totalStudents][5];
    float totalMarks[totalStudents];
    float percentage[totalStudents];
    char grade[totalStudents];
    string Subjects[5] = {"Physics" , "English" , "Programing Fundamental" , "ICT" , "MQ"};
    


        

        for (int j = 0; j < totalStudents; j++) {
            cout << "Enter marks of student No " << j + 1 << " in 5 subjects: \n";
            for (int i = 0; i < 5; i++) {
            cout << "Numbers in " << Subjects[i] << ": ";
            cin >> marks[j] [i] ;
            cout << endl;
            }
            
        }

   
        for (int j = 0; j < totalStudents; j++) {
        	totalMarks[j] = 0;
            for (int i = 0; i < 5; i++) {
                totalMarks[j] += marks[j][i];

            }
            for (int i = 0; i < 5; i++) {
              percentage[j] = (totalMarks[j] / 500) * 100;


            }

            for (int i = 0; i < 5; i++) {
                if (percentage[j] >= 90) {
                    grade[j] = 'A';
                } else if (percentage  [j] >= 80) {
                    grade[j] = 'B';
                } else if (percentage[j] >= 70) {
                    grade[j] = 'C';
                } else if (percentage[j] >= 60) {
                    grade [j] = 'D';
                } else {
                    grade[j] = 'F';
                }
            }
        }
        for (int j = 0; j < totalStudents; j++) {
            cout << "Results for student No" << j + 1 << ":\n";
            cout << "\t \t \t Total Marks: " << totalMarks[j]<< "\n";
            cout << "\t \t \t Percentage: " << percentage[j] << "%\n";
            cout << "\t \t\ \t Grade: " << grade[j] << "\n";
        }
    return 0;
}


           


        
    
