#include <iostream>
using namespace std;

// ---------------- Bubble Sort Function ----------------
void bubbleSort(int a, int b, int c, int d, int e) {
    int comparison_count = 0;
    int temp;

 
    comparison_count++; if (a > b) { temp = a; a = b; b = temp; }
    comparison_count++; if (b > c) { temp = b; b = c; c = temp; }
    comparison_count++; if (c > d) { temp = c; c = d; d = temp; }
    comparison_count++; if (d > e) { temp = d; d = e; e = temp; }


    comparison_count++; if (a > b) { temp = a; a = b; b = temp; }
    comparison_count++; if (b > c) { temp = b; b = c; c = temp; }
    comparison_count++; if (c > d) { temp = c; c = d; d = temp; }


    comparison_count++; if (a > b) { temp = a; a = b; b = temp; }
    comparison_count++; if (b > c) { temp = b; b = c; c = temp; }


    comparison_count++; if (a > b) { temp = a; a = b; b = temp; }

    cout << "Bubble Sort Result: "
         << a << " " << b << " " << c << " " << d << " " << e << endl;
    cout << "Total Comparisons (Bubble): " << comparison_count << endl;
}




void selectionSort(int a, int b, int c, int d, int e) {
    int comparison_count = 0;




    if (b < a) { int t=a; a=b; b=t; }
    comparison_count++;

    if (c < a) { int t=a; a=c; c=t; }
    comparison_count++;

    if (d < a) { int t=a; a=d; d=t; }
    comparison_count++;

    if (e < a) { int t=a; a=e; e=t; }
    comparison_count++;


    if (c < b) { int t=b; b=c; c=t; }
    comparison_count++;

    if (d < b) { int t=b; b=d; d=t; }
    comparison_count++;

    if (e < b) { int t=b; b=e; e=t; }
    comparison_count++;


    if (d < c) { int t=c; c=d; d=t; }
    comparison_count++;

    if (e < c) { int t=c; c=e; e=t; }
    comparison_count++;


    if (e < d) { int t=d; d=e; e=t; }
    comparison_count++;

    cout << "Selection Sort Result: "
         << a << " " << b << " " << c << " " << d << " " << e << endl;
    cout << "Total Comparisons (Selection): " << comparison_count << endl;
}




int main() {
    int a = 5, b = 3, c = 8, d = 4, e = 2;


    int a1=a, b1=b, c1=c, d1=d, e1=e;
    int a2=a, b2=b, c2=c, d2=d, e2=e;

    bubbleSort(a1, b1, c1, d1, e1);
    cout << endl;
    selectionSort(a2, b2, c2, d2, e2);

    return 0;
}

