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
