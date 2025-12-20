#include <iostream>

using namespace std;

int main() {
    int num1, num2, lcm;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b)
    int a = num1, b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;
    lcm = (num1 * num2) / gcd;

    cout << "LCM of " << num1 << " and " << num2 << " is " << lcm << endl;

    return 0;
}