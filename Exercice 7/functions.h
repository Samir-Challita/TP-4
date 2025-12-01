#include <iostream>
#include <cmath>
using namespace std;

long long factorielle(int a) {
	long long r = 1;
	if (a == 0)
		r = 1;
	for (int i = 1; i <= a; i++) {
		r *= i;
	}
	return r;
}
 
long double puissance(double a, int b) {
	long double r = 1;
	for (int i = 1; i <= b; i++) {
		r *= a;
	}
	return r;
}

long double exponentielle(int a, int b) {
	long double x = 0;
	for (int i = 0; i <= b; i++) {
		x += puissance(a, i) / factorielle(i);
	}
	return x;
}

