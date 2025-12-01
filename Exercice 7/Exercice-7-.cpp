#include <iostream>
#include "functions.h"
using namespace std;

int main() {
	int n;
	long double x;
	cout <<"Pour calculer e^x entrer l'exposon x et n pour avoir une une valeur plus proche et convenable"
		<<" (Plus que n et grande plus que la valeur de l'exposon est proche): \n"<<"Entrer n = ";
	cin >> n;
	cout << "Entrer x = ";
	cin >> x;

	cout << "Alors, e^"<<x<<" est egual a peu pres;\n"<<"e^" << x << " = " << exponentielle(x, n) << endl;
	return 0;
}
