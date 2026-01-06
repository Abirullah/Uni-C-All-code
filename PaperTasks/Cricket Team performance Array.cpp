#include <iostream>
using namespace std;

int main() {
    string name[15];
    int score[15][5];
    int total[15];
    float average[15];

    int bestPlayer = 0;


    for (int i = 0; i < 15; i++) {
        cout << "\nEnter name of player " << i + 1 << ": ";
        cin >> name[i];

        total[i] = 0;

        cout << "Enter scores of 5 matches:\n";
        for (int j = 0; j < 5; j++) {
            cin >> score[i][j];
            total[i] += score[i][j];
        }

        average[i] = total[i] / 5.0;


        if (total[i] > total[bestPlayer]) {
            bestPlayer = i;
        }
    }


    cout << "\n--- Players Performance ---\n";
    for (int i = 0; i < 15; i++) {
        cout << "Player: " << name[i]
             << " | Total: " << total[i]
             << " | Average: " << average[i] << endl;
    }


    cout << "\nBest Player: " << name[bestPlayer];
    cout << "\nBest Score (Total): " << total[bestPlayer];

    return 0;
}

