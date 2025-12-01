#include <iostream>
#include "Function.h"
using namespace std;

int main() {
	int n;
	cout << "Entrer un nb entier positif pour afficher son image miroir : ";
	cin >> n;
	cout << "Miroir de " << n << " est " << miroir(n) << endl;
	return 0;
}