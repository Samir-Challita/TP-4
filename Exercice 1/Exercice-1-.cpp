#include <iostream>
#include "Functions.h"
using namespace std;

int main() {
	int a;
	cout << "Salut pour calculer le carre d'un nombe t'a que d'entrer le nb : \nA = ";
	cin >> a;

	cout << "Alors le carre de A^2 = " << carre(a) << endl;
	return 0;
}