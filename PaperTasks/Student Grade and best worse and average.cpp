#include <iostream>
using namespace std;

int main() {
    int marks[5][10];
    float avg[5];
    int i, j;

 
    for (i = 0; i < 5; i++) {
        cout << "Enter marks of 10 quizzes for student " << i + 1 << ":\n";
        int sum = 0;

        for (j = 0; j < 10; j++) {
            cin >> marks[i][j];
            sum += marks[i][j];
        }

        avg[i] = sum / 10.0;   
    }

   
    int best = 0, worst = 0;

    for (i = 1; i < 5; i++) {
        if (avg[i] > avg[best])
            best = i;
        if (avg[i] < avg[worst])
            worst = i;
    }


    float courseAvg = 0;
    for (i = 0; i < 5; i++) {
        courseAvg += avg[i];
    }
    courseAvg /= 5;


    int averageStudent = 0;
    float minDiff;

    if (avg[0] > courseAvg)
        minDiff = avg[0] - courseAvg;
    else
        minDiff = courseAvg - avg[0];
 

    for (i = 1; i < 5; i++) {
        float diff;
	
	if (avg[i] > courseAvg)
	    diff = avg[i] - courseAvg;
	else
	    diff = courseAvg - avg[i];

        

        
        if (diff < minDiff) {
            minDiff = diff;
            averageStudent = i;
        }
    }


    cout << "\nBest Student: Student " << best + 1;
    cout << "\nWorst Student: Student " << worst + 1;
    cout << "\nAverage Student: Student " << averageStudent + 1;

    return 0;
}

