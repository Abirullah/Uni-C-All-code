#include <iostream>
#include <fstream>
#include <cstring>
#include <windows.h>   
using namespace std;

struct Student {
    int roll;
    char name[30];
    int attendance[30]; 
};

int totalStudents = 0;
int currentDay = 0;


void enterStudents() {
    system("cls");
    cout << "Enter total number of students: ";
    cin >> totalStudents;

    Student s;
    ofstream file("students.dat", ios::binary);

    for (int i = 0; i < totalStudents; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll No: ";
        cin >> s.roll;
        cout << "Name: ";
        cin >> s.name;

        for (int d = 0; d < 30; d++)
            s.attendance[d] = -1; 

        file.write((char*)&s, sizeof(s));
    }

    file.close();
    cout << "\nStudents data saved successfully!";
    system("pause");
}


void markAttendance() {
    if (currentDay >= 30) return;

    system("cls");
    cout << "Marking attendance for Day " << currentDay + 1 << endl;

    fstream file("students.dat", ios::binary | ios::in | ios::out);
    Student s;

    while (file.read((char*)&s, sizeof(s))) {
        cout << "\nRoll No: " << s.roll;
        cout << "\nName: " << s.name;
        cout << "\nPresent (1) / Absent (0): ";
        cin >> s.attendance[currentDay];

        int pos = file.tellg();
        file.seekp(pos - sizeof(s));
        file.write((char*)&s, sizeof(s));
    }

    file.close();
    currentDay++;

    cout << "\nAttendance marked for the day!";
    Sleep(1000);
}


void viewAllAttendance() {
    system("cls");
    ifstream file("students.dat", ios::binary);
    Student s;

    while (file.read((char*)&s, sizeof(s))) {
        int present = 0;

        for (int i = 0; i < currentDay; i++)
            if (s.attendance[i] == 1)
                present++;

        float percentage = (currentDay == 0) ? 0 : (present * 100.0 / currentDay);

        cout << "\nRoll No: " << s.roll;
        cout << "\nName: " << s.name;
        cout << "\nAttendance: " << percentage << "%\n";
    }

    file.close();
    system("pause");
}


void viewSingleStudent() {
    system("cls");
    int r;
    cout << "Enter Roll Number: ";
    cin >> r;

    ifstream file("students.dat", ios::binary);
    Student s;
    bool found = false;

    while (file.read((char*)&s, sizeof(s))) {
        if (s.roll == r) {
            found = true;
            int present = 0;

            cout << "\nName: " << s.name << endl;
            for (int i = 0; i < currentDay; i++) {
                cout << "Day " << i + 1 << ": ";
                if (s.attendance[i] == 1) {
                    cout << "Present\n";
                    present++;
                } else {
                    cout << "Absent\n";
                }
            }

            float percentage = (currentDay == 0) ? 0 : (present * 100.0 / currentDay);
            cout << "\nAttendance Percentage: " << percentage << "%\n";
            break;
        }
    }

    if (!found)
        cout << "\nStudent not found!\n";

    file.close();
    system("pause");
}


void finalResult() {
    system("cls");
    ifstream file("students.dat", ios::binary);
    Student s;

    cout << "===== FINAL MONTHLY RESULT =====\n";

    while (file.read((char*)&s, sizeof(s))) {
        int present = 0;

        for (int i = 0; i < 30; i++)
            if (s.attendance[i] == 1)
                present++;

        float percentage = (present / 30.0) * 100;

        cout << "\nRoll No: " << s.roll;
        cout << "\nName: " << s.name;
        cout << "\nAttendance: " << percentage << "%";

        if (percentage < 75)
            cout << " (Defaulter)";
        cout << endl;
    }

    file.close();
    system("pause");
}


int main() {
    enterStudents();

    int choice;
    do {
        system("cls");
        cout << "===== STUDENT ATTENDANCE SYSTEM =====\n";
        cout << "Current Day: " << currentDay << "/30\n\n";
        cout << "1. Mark New Day Attendance\n";
        cout << "2. View All Students Attendance\n";
        cout << "3. View Specific Student Attendance\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            markAttendance();
            break;
        case 2:
            viewAllAttendance();
            break;
        case 3:
            viewSingleStudent();
            break;
        case 4:
            break;
        default:
            cout << "Invalid choice!";
            Sleep(1000);
        }

    } while (choice != 4 && currentDay < 30);

    if (currentDay == 30)
        finalResult();

    return 0;
}

