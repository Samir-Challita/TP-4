#include <iostream>
#include "functions.h"
using namespace std;

int main() {
	int longeur, largeur;
	cout << "Pour calculer l'aire de ton recatangle entrer : \nLargeur = ";
	cin >> largeur;
	cout << "Longueur = ";
	cin >> longeur;

	cout << "Aire = " << aire(longeur, largeur) << endl;
	return 0;
}