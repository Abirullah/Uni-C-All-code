#include <iostream>

using namespace std;

int main(){



	long long a0 = 1;
	long long a1 = 2;

	const int TERMS = 10;
		cout << a0;
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
