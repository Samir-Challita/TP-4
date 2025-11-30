#include <iostream>
#include "functions.h"
using namespace std;

int main() {
	int n;
	cout << "Une suite geometrique est definie par la relation : Un+1=QxUn . On donne Q=2 et U0=1."
		<< "\nEntrer n = ";
	cin >> n;

	cout << "Alors, U" << n << "+1 = " << suite_geo(n) << endl;
	return 0;
}