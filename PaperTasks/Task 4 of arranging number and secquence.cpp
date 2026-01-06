#include <iostream>
using namespace std;

int main() {
    int arr[5][5];

  
    cout << "Enter 25 elements (5x5 matrix):\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nOutput:\n";


    for (int i = 0; i < 5; i++) {


        for (int j = 0; j < 5; j++) {
            cout << arr[i][j];
        }

        cout << "  ";


        for (int j = i; j < 5; j++) {
            cout << arr[i][j];
        }

        cout << endl;
    }

    return 0;
}

