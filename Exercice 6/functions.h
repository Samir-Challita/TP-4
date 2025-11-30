#include <iostream>
using namespace std;

double approx_rc(double A) {
	double X1 = A;
	for (int j = 1; j <= A; j++) {
		X1 = 0.5 * (X1 + A / X1);
		cout << "La " << j << "ere approximation de la racine carree de " << A << " est " << X1<<endl;
	}
	return X1;
}