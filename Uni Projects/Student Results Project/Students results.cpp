#include <iostream>
#include <fstream>
#include <windows.h>
#include <cstring>
#include <cctype>
using namespace std;

struct Student {
    int rollNo;
    char name[50];
    int marks[6];
    float percentage;
    char grade;
    int attendance;
};

void centerText(const char* text) {
    int width = 80;
    int padding = (width - strlen(text)) / 2;
    for (int i = 0; i < padding; i++)
        cout << " ";
    cout << text << endl;
}


bool isValidName(const char* name) {
    for (int i = 0; name[i] != '\0'; i++) {
        if (!isalpha(name[i]) && name[i] != ' ')
            return false;
    }
    return true;
}

int main() {
    system("cls");
    centerText("STUDENT RESULT MANAGEMENT SYSTEM");
    Sleep(1500);

    int n;
    cout << "\n\tEnter number of students: ";
    cin >> n;

    ofstream fout("students.dat", ios::binary);
    Student s;

    for (int i = 0; i < n; i++) {
        system("cls");
        centerText("ENTER STUDENT DETAILS");

        cout << "\n\tRoll No: ";
        cin >> s.rollNo;

        cin.ignore();

    
        do {
            cout << "\tName: ";
            cin.getline(s.name, 50);

            if (!isValidName(s.name)) {
                cout << "\t? Invalid name! Only alphabets allowed.\n";
                Sleep(1000);
            }
        } while (!isValidName(s.name));

        int total = 0;


        for (int j = 0; j < 6; j++) {
            do {
                cout << "\tMarks of subject " << j + 1 << " (0-100): ";
                cin >> s.marks[j];

                if (s.marks[j] < 0 || s.marks[j] > 100) {
                    cout << "\t? Marks must be between 0 and 100!\n";
                    Sleep(1000);
                }
            } while (s.marks[j] < 0 || s.marks[j] > 100);

            total += s.marks[j];
        }


        do {
            cout << "\tAttendance (%): ";
            cin >> s.attendance;

            if (s.attendance < 0 || s.attendance > 100) {
                cout << "\t? Attendance must be between 0 and 100!\n";
                Sleep(1000);
            }
        } while (s.attendance < 0 || s.attendance > 100);

        s.percentage = total / 6.0;

        if (s.percentage >= 80) s.grade = 'A';
        else if (s.percentage >= 60) s.grade = 'B';
        else if (s.percentage >= 40) s.grade = 'C';
        else s.grade = 'F';

        fout.write((char*)&s, sizeof(s));
    }
    fout.close();


    int choice;
    do {
        system("cls");
        centerText("MAIN MENU");
        centerText("---------");

        cout << "\n\t1. Display all students";
        cout << "\n\t2. Show topper";
        cout << "\n\t3. Show failed students";
        cout << "\n\t4. Show low attendance students";
        cout << "\n\t5. Search student by roll number";
        cout << "\n\t0. Exit";
        cout << "\n\n\tEnter choice: ";
        cin >> choice;

        ifstream fin("students.dat", ios::binary);
        Student temp;

        switch (choice) {

        case 1: {
            system("cls");
            centerText("ALL STUDENT RECORDS");

            while (fin.read((char*)&temp, sizeof(temp))) {
                cout << "\n\tRoll No: " << temp.rollNo;
                cout << "\n\tName: " << temp.name;
                cout << "\n\tPercentage: " << temp.percentage;
                cout << "\n\tGrade: " << temp.grade;
                cout << "\n\tAttendance: " << temp.attendance << "%\n";
                Sleep(500);
            }
            fin.close();
            system("pause");
            break;
        }

        case 2: {
            system("cls");
            centerText("TOPPER DETAILS");

            Student topper;
            bool found = false;

            while (fin.read((char*)&temp, sizeof(temp))) {
                if (!found || temp.percentage > topper.percentage) {
                    topper = temp;
                    found = true;
                }
            }
            fin.close();

            cout << "\n\tRoll No: " << topper.rollNo;
            cout << "\n\tName: " << topper.name;
            cout << "\n\tPercentage: " << topper.percentage;
            cout << "\n\tGrade: " << topper.grade;

            system("pause");
            break;
        }

        case 3: {
            system("cls");
            centerText("FAILED STUDENTS");

            while (fin.read((char*)&temp, sizeof(temp))) {
                if (temp.grade == 'F') {
                    cout << "\n\t" << temp.name
                         << " (Roll: " << temp.rollNo << ")";
                }
            }
            fin.close();
            system("pause");
            break;
        }

        case 4: {
            system("cls");
            centerText("LOW ATTENDANCE STUDENTS (<75%)");

            while (fin.read((char*)&temp, sizeof(temp))) {
                if (temp.attendance < 75) {
                    cout << "\n\t" << temp.name
                         << " - " << temp.attendance << "%";
                }
            }
            fin.close();
            system("pause");
            break;
        }

        case 5: {
            system("cls");
            centerText("SEARCH STUDENT");

            int roll;
            bool foundStudent = false;

            cout << "\n\tEnter roll number: ";
            cin >> roll;

            while (fin.read((char*)&temp, sizeof(temp))) {
                if (temp.rollNo == roll) {
                    cout << "\n\tName: " << temp.name;
                    cout << "\n\tPercentage: " << temp.percentage;
                    cout << "\n\tGrade: " << temp.grade;
                    cout << "\n\tAttendance: " << temp.attendance << "%";
                    foundStudent = true;
                    break;
                }
            }
            fin.close();

            if (!foundStudent)
                cout << "\n\tStudent not found!";

            system("pause");
            break;
        }

        case 0:
            system("cls");
            centerText("THANK YOU FOR USING THE SYSTEM");
            Sleep(1500);
            break;

        default:
            cout << "\n\tInvalid choice!";
            Sleep(1000);
        }

    } while (choice != 0);

    return 0;
}

