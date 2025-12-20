#include <iostream>

using namespace std;

int main() {
    char InputChar;
    cout << "Enter a character: ";
    cin >> InputChar;

    switch (InputChar) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << InputChar << " is a vowel." << endl;
            break;
        default:
            cout << InputChar << " is a consonant." << endl;
    }
   
    return 0;
}