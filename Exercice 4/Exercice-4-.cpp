#include <iostream>
#include "functions.h"
using namespace std;

int main() {
	int n;
	cout << "Une suite arithmetique est definie sous la forme suivante : Un+1 = Un + R. On donne U0 = 5 et R = 2.\n"
		<< "Entrer n = ";
	cin >> n;

	cout << "Alors, U" << n << "+1 = " << suite_ar(n) << endl;
	return 0;
}