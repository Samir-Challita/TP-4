#include <iostream>
#include "functions.h"
using namespace std;

int main() {
	int nb;
	cout << "A = ";
	cin >> nb;
	cout << "Reponse, " << approx_rc(nb) << endl;
	return 0;
}