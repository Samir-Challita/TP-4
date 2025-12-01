#include <iostream>
using namespace std;

int miroir(int a) {
	int r = 1, mir = 0;
	while (a != 0) {
		r = a % 10;
		mir = mir * 10 + r;
		a /= 10;
	}
	return mir;

}
