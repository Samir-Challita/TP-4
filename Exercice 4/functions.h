#include <iostream>
using namespace std;

int suite_ar(int a) {
	const int R = 2;
	int U0 = 5;
	for (int i = 1; i <= a; i++) {
		U0 = U0 + R;
	}
	return U0;
}
//Or
/*int suite_arit(int n) {
	const int R = 2;
	int U = 5;
	for (int a = 0; a < n; a++) {
		U = U + R;
	}
	cout << "U" << n << "+1 = U" << n << " + 2 = ";
	return U;
}
*/
