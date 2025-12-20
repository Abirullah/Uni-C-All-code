#include <iostream>
#include <vector>
using namespace std;

int main() {
    int totalStudents;
    cout << "Enter number of students: ";
    cin >> totalStudents;

    // Each student has 5 subjects
    vector<vector<float>> marks(totalStudents, vector<float>(5));
    vector<float> totalMarks(totalStudents, 0);
    vector<float> percentage(totalStudents, 0);
    vector<char> grade(totalStudents);

    // Input marks
    for (int j = 0; j < totalStudents; j++) {
        cout << "Enter marks for student " << j + 1 << " in 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[j][i];
            totalMarks[j] += marks[j][i];
        }
    }

    // Calculate percentage and grade
    for (int j = 0; j < totalStudents; j++) {
        percentage[j] = (totalMarks[j] / 500) * 100;

        if (percentage[j] >= 90)
            grade[j] = 'A';
        else if (percentage[j] >= 80)
            grade[j] = 'B';
        else if (percentage[j] >= 70)
            grade[j] = 'C';
        else if (percentage[j] >= 60)
            grade[j] = 'D';
        else
            grade[j] = 'F';
    }

    // Display results
    cout << "\n===== RESULTS =====\n";
    for (int j = 0; j < totalStudents; j++) {
        cout << "Student " << j + 1 << ":\n";
        cout << "Total Marks: " << totalMarks[j] << "/500\n";
        cout << "Percentage: " << percentage[j] << "%\n";
        cout << "Grade: " << grade[j] << "\n\n";
    }

    return 0;
}

