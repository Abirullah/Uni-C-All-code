#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <windows.h>

using namespace std;

class SuperMarketData {
private:
    string itemName;
    int itemQuantity;
    int itemPrice;

public:
    SuperMarketData() {
        itemName = "";
        itemQuantity = 0;
        itemPrice = 0;
    }

    void setItemName(string name) {
        itemName = name;
    }

    void setItemQuantity(int qty) {
        itemQuantity = qty;
    }

    void setItemPrice(int price) {
        itemPrice = price;
    }

    string getItemName() {
        return itemName;
    }

    int getItemQuantity() {
        return itemQuantity;
    }

    int getItemPrice() {
        return itemPrice;
    }
};

//  ADD ITEM 
void AddItem(SuperMarketData &B) {
    bool terminate = false;

    while (!terminate) {
        system("cls");
        int choice;

        cout << "\tWelcome To Grocery Store\n";
        cout << "\t----------------------------\n";
        cout << "\t1. Add New Item\n";
        cout << "\t2. Back To Menu\n";
        cout << "\tEnter Choice: ";
        cin >> choice;

        if (choice == 1) {
            system("cls");

            string name;
            int qty, price;

            cout << "Enter Item Name: ";
            cin >> name;
            B.setItemName(name);

            cout << "Enter Item Quantity: ";
            cin >> qty;
            B.setItemQuantity(qty);

            cout << "Enter Item Price: ";
            cin >> price;
            B.setItemPrice(price);

            ofstream out("items.txt", ios::app);

            if (!out) {
                cout << "Error: File cannot open!\n";
            } else {
                out << B.getItemName() << " : "
                    << B.getItemPrice() << " : "
                    << B.getItemQuantity() << endl;
                cout << "Item Added Successfully!\n";
            }

            out.close();
            Sleep(2000);
        }
        else if (choice == 2) {
            terminate = true;
        }
    }
}

//  PRINT BILL 
void PrintBill() {
    system("cls");
    int totalBill = 0;

    string searchItem;
    int requiredQty;

    cout << "Enter Item Name: ";
    cin >> searchItem;

    cout << "Enter Quantity: ";
    cin >> requiredQty;

    ifstream in("items.txt");
    ofstream temp("temp.txt");

    if (!in) {
        cout << "File not found!\n";
        return;
    }

    string line;
    bool found = false;

    while (getline(in, line)) {
        stringstream All_Info(line);
        string itemName;
        int price, quantity;
        char colon;

        All_Info >> itemName >> colon >> price >> colon >> quantity;

        if (itemName == searchItem) {
            found = true;

            if (requiredQty <= quantity) {
                int amount = price * requiredQty;
                totalBill += amount;

                cout << "\nItem\tPrice\tQty\tTotal\n";
                cout << itemName << "\t" << price << "\t"
                     << requiredQty << "\t" << amount << endl;

                quantity -= requiredQty;
            } else {
                cout << "Not enough stock!\n";
            }
        }

        temp << itemName << " : " << price << " : " << quantity << endl;
    }

    in.close();
    temp.close();

    remove("items.txt");
    rename("temp.txt", "items.txt");

    if (!found) {
        cout << "Item not found!\n";
    }

    cout << "\nTotal Bill: " << totalBill << endl;
   char Continue;
   cout<<"Press any key to continue...";
   cin>>Continue;
}


int main() {
    SuperMarketData B;
    bool terminate = false;

    while (!terminate) {
        system("cls");
        int choice;

        cout << "\tWelcome To Grocery Store\n";
        cout << "\t----------------------------\n";
        cout << "\t1. Add Item\n";
        cout << "\t2. Print Bill\n";
        cout << "\t3. Exit\n";
        cout << "\tEnter Choice: ";
        cin >> choice;

        if (choice == 1) {
            AddItem(B);
        }
        else if (choice == 2) {
            PrintBill();
        }
        else if (choice == 3) {
            terminate = true;
        }
    }

    return 0;
}
