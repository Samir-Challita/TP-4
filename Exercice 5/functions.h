#include <iostream>
using namespace std;

int suite_geo(int a) {
	const int Q = 2;
	int U0 = 1;
	for (int i = 1; i <= a; i++) {
		U0 = U0 * Q;
	}
	return U0;
}