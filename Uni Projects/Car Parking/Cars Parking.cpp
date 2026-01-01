#include <iostream>
#include <fstream>
#include <windows.h>
#include <cstring>
using namespace std;

#define MAX_SLOTS 10
#define RATE_PER_HOUR 10

struct Car {
    int slotNo;
    char plateNo[15];
    char ownerName[50];
    int pin;
    int hours;
    bool occupied;
};


void centerText(const char* text) {
    int width = 80;
    int padding = (width - strlen(text)) / 2;
    for (int i = 0; i < padding; i++)
        cout << " ";
    cout << text << endl;
}


void loadData(Car parking[]) {
    ifstream fin("parking.dat", ios::binary);
    if (!fin) {
        for (int i = 0; i < MAX_SLOTS; i++) {
            parking[i].slotNo = i + 1;
            parking[i].occupied = false;
        }
        return;
    }
    fin.read((char*)parking, sizeof(Car) * MAX_SLOTS);
    fin.close();
}

void saveData(Car parking[]) {
    ofstream fout("parking.dat", ios::binary);
    fout.write((char*)parking, sizeof(Car) * MAX_SLOTS);
    fout.close();
}

int main() {
    Car parking[MAX_SLOTS];
    loadData(parking);

    int choice;
    int totalCarsServed = 0;
    int totalBalance = 0;

    do {
        system("cls");
        centerText("CAR PARKING MANAGEMENT SYSTEM");
        centerText("------------------------------");

        cout << "\n\t1. View parking slots";
        cout << "\n\t2. Park a car";
        cout << "\n\t3. Remove a car";
        cout << "\n\t4. End day report";
        cout << "\n\t0. Exit";
        cout << "\n\n\tEnter choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            system("cls");
            centerText("PARKING SLOT STATUS");

            for (int i = 0; i < MAX_SLOTS; i++) {
                cout << "\n\tSlot " << parking[i].slotNo << " : ";
                if (parking[i].occupied)
                    cout << "OCCUPIED (" << parking[i].plateNo << ")";
                else
                    cout << "EMPTY";
            }
            cout<<endl;
            system("pause");
            break;
        }


        case 2: {
            system("cls");
            centerText("PARK A CAR");

            int slot = -1;
            for (int i = 0; i < MAX_SLOTS; i++) {
                if (!parking[i].occupied) {
                    slot = i;
                    break;
                }
            }

            if (slot == -1) {
                cout << "\n\t? Parking Full!";
                system("pause");
                break;
            }

            parking[slot].occupied = true;
            parking[slot].slotNo = slot + 1;

            cout << "\n\tCar Plate Number: ";
            cin >> parking[slot].plateNo;

            cout << "\tOwner Name: ";
            cin.ignore();
            cin.getline(parking[slot].ownerName, 50);

            cout << "\tSet 4-digit PIN: ";
            cin >> parking[slot].pin;

            cout << "\tHours to park: ";
            cin >> parking[slot].hours;

            saveData(parking);

            cout << "\n\t? Car parked at slot " << slot + 1<<endl;
            system("pause");
            break;
        }

        case 3: {
            system("cls");
            centerText("REMOVE A CAR");

            int slot, enteredPin;
            cout << "\n\tEnter slot number: ";
            cin >> slot;

            if (slot < 1 || slot > MAX_SLOTS || !parking[slot - 1].occupied) {
                cout << "\n\t? Invalid slot!"<<endl;
                system("pause");
                break;
            }

            cout << "\tEnter PIN: ";
            cin >> enteredPin;

            if (enteredPin != parking[slot - 1].pin) {
                cout << "\n\t? Wrong PIN!"<<endl;
                system("pause");
                break;
            }

            int bill = parking[slot - 1].hours * RATE_PER_HOUR;
            totalBalance += bill;
            totalCarsServed++;

            cout << "\n\tCar Plate: " << parking[slot - 1].plateNo;
            cout << "\n\tTotal Hours: " << parking[slot - 1].hours;
            cout << "\n\tBill: Rs " << bill;

            parking[slot - 1].occupied = false;
            saveData(parking);
            cout<<endl;
            system("pause");
            break;
        }


        case 4: {
            system("cls");
            centerText("END OF DAY REPORT");

            cout << "\n\tTotal Cars Served: " << totalCarsServed;
            cout << "\n\tTotal Balance Earned: Rs " << totalBalance<<endl;

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

