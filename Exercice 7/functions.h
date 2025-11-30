#include <iostream>
#include <cmath>
using namespace std;

int long factorielle(int a) {
	int r = 1;
	if (a == 0)
		r = 1;
	for (int i = 1; i <= a; i++) {
		r = r * i;
	}
	return r;
}
 
double long puissance(double a, int b) {
	int r = 1;
	for (int i = 1; i <= b; i++) {
		r = r * a;
	}
	return r;
}

double long exponentielle(double a, double b) {
	double x = 0;
	for (int i = 0; i <= b; i++) {
		x = x + (puissance(a, i) / factorielle(i));
	}
	return x;
}