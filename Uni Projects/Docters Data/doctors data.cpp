#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

struct Doctor {
    string name;
    string degree;
    string specialist;
    int experience;
    string hospital;
};

Doctor d[50];
int total = 0;


void header();
void menu();
void addDoctor();
void viewDoctors();
void updateDoctor();
void deleteDoctor();

int main() {
    int choice;

    while (true) {
        system("cls");
        header();
        menu();

        cout << "\n\tEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addDoctor();
                break;
            case 2:
                viewDoctors();
                break;
            case 3:
                updateDoctor();
                break;
            case 4:
                deleteDoctor();
                break;
            case 5:
                cout << "\n\tExiting program";
                Sleep(800); cout << ".";
                Sleep(800); cout << ".";
                Sleep(800); cout << ".";
                exit(0);
            default:
                cout << "\n\tInvalid choice!";
                Sleep(1500);
        }
    }
    return 0;
}

void header() {
    cout << "\n";
    cout << "\t=============================================\n";
    cout << "\t        DOCTOR MANAGEMENT SYSTEM              \n";
    cout << "\t=============================================\n\n";
}

void menu() {
    cout << "\t1. Add Doctor Record\n";
    cout << "\t2. View All Doctors\n";
    cout << "\t3. Update Doctor Record\n";
    cout << "\t4. Delete Doctor Record\n";
    cout << "\t5. Exit\n";
}

void addDoctor() {
    system("cls");
    header();

    cin.ignore();
    cout << "\tEnter Doctor Name       : ";
    getline(cin, d[total].name);

    cout << "\tEnter Degree (MBBS/BDS) : ";
    getline(cin, d[total].degree);

    cout << "\tEnter Specialist        : ";
    getline(cin, d[total].specialist);

    cout << "\tEnter Experience (yrs)  : ";
    cin >> d[total].experience;
    cin.ignore();

    cout << "\tEnter Hospital Name     : ";
    getline(cin, d[total].hospital);

    total++;

    cout << "\n\tDoctor record added successfully!";
    Sleep(1500);
}

void viewDoctors() {
    system("cls");
    header();

    if (total == 0) {
        cout << "\tNo doctor records found!";
    } else {
        cout << left;
        cout << setw(5) << "\t#"
             << setw(20) << "Name"
             << setw(10) << "Degree"
             << setw(15) << "Specialist"
             << setw(12) << "Experience"
             << setw(15) << "Hospital\n";

        cout << "\t---------------------------------------------------------------\n";

        for (int i = 0; i < total; i++) {
            cout << "\t" << setw(5) << i + 1
                 << setw(20) << d[i].name
                 << setw(10) << d[i].degree
                 << setw(15) << d[i].specialist
                 << setw(12) << d[i].experience
                 << setw(15) << d[i].hospital << endl;
        }
    }
    system("pause");
}

void updateDoctor() {
    system("cls");
    header();

    int index;
    cout << "\tEnter Doctor Number to Update: ";
    cin >> index;

    if (index < 1 || index > total) {
        cout << "\n\tInvalid doctor number!";
        Sleep(1500);
        return;
    }

    index--; 

    cin.ignore();
    cout << "\tEnter New Name       : ";
    getline(cin, d[index].name);

    cout << "\tEnter New Degree     : ";
    getline(cin, d[index].degree);

    cout << "\tEnter New Specialist : ";
    getline(cin, d[index].specialist);

    cout << "\tEnter New Experience : ";
    cin >> d[index].experience;
    cin.ignore();

    cout << "\tEnter New Hospital   : ";
    getline(cin, d[index].hospital);

    cout << "\n\tDoctor record updated successfully!";
    Sleep(1500);
}

void deleteDoctor() {
    system("cls");
    header();

    int index;
    cout << "\tEnter Doctor Number to Delete: ";
    cin >> index;

    if (index < 1 || index > total) {
        cout << "\n\tInvalid doctor number!";
        Sleep(1500);
        return;
    }

    index--;

    for (int i = index; i < total - 1; i++) {
        d[i] = d[i + 1];
    }

    total--;

    cout << "\n\tDoctor record deleted successfully!";
    Sleep(1500);
}

