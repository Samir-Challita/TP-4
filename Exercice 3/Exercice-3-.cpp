#include <iostream>
#include "functions.h"
using namespace std;

int main() {
	int n;
	cout << "Pour calculer N! faite entrer N : ";
	cin >> n;

	cout << "Alors, " << n << "! = " << factorielle(n) << endl;
	return 0;
}