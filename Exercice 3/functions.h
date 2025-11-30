#include <iostream>
using namespace std;

int factorielle(int a) {
	int r = 1;
	if (a == 0)
		r = 1;
	for (int i = 1; i <= a; i++) {
		r = r * i;
	}
	return r;
}
//Or
/*int factorielle(int a) {
	int n;
	for (n = 1 ; a > 0; a--) {
		n = n * a;
	}
	return n;
}*/
