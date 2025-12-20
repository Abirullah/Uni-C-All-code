#include <iostream>

using namespace std;

int main(){

	// Sequence defined by:
	// a0 = 1, a1 = 2
	// a(n) = 2*a(n-1) + a(n-2)
	// Produces: 1 2 5 12 29 ...

	long long a0 = 1;
	long long a1 = 2;

	const int TERMS = 10;
	if (TERMS <= 0) return 0;

	cout << a0;
	if (TERMS == 1) { cout << endl; return 0; }

	cout << " " << a1;

	for (int i = 2; i < TERMS; ++i) {
		long long an = 2 * a1 + a0;
		cout << " " << an;
		a0 = a1;
		a1 = an;
	}

	cout << endl;
	return 0;
}

