#include <iostream>
using namespace std;

int main() {
    char arr[100];
    char ch, search;
    int i = 0, count = 0;

  
    cout << "Enter characters: ";
    while (true) {
        ch = cin.get();

        if (ch == '\n') {   
            break;
        }

        arr[i] = ch;
        i++;
    }

    arr[i] = '\0';   

 
    cout << "Enter character to search: ";
    cin >> search;

    for (int j = 0; arr[j] != '\0'; j++) {
        if (arr[j] == search) {
            count++;
        }
    }


    cout << "Character appears " << count << " times";

    return 0;
}

