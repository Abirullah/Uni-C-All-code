#include <iostream>

using namespace std;

int main() {
    int choice;
    float area, radius, length, width, side, parameter;

    cout << "Enter a number (1-4) (1) for squar (2) for rectangle (3) for circle and (4) for no calculation : ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "length :";
            cin >> length;
            cout << "\n width :";
            cin >> width;
            area = length * width;
            parameter = 2 * (length + width);
            cout << "Area of rectangle : " << area << endl<<"and parameter is : "<< parameter<< endl;
            
            break;
        case 2:
            cout << "side :";
            cin >> side;
            area = side * side;
            parameter = 4 * side;
            cout << "Parameter of square : " << parameter << endl;
            cout << "\n Area of square : " << area << endl;
            break;
        case 3:
            cout << "radius :";
            cin >> radius;
            area = 3.14 * radius * radius;
            parameter = 2 * 3.14 * radius;
            cout << "Parameter of circle : " << parameter << endl;
            cout << "\n Area of circle : " << area << endl;
            break;
        case 4:
            cout << "you selected no shape" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
