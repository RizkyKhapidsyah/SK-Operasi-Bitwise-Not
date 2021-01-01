#include <iostream>
#include <conio.h>

using namespace std;

/* Created by Rizky Khapidsyah */

int main() {
	int a, x, y;
	
	cout << "Masukan Nilai X = ";
	cin >> x;

	a = ~x;
	
	cout << "\n";
	cout << "Hasil dari ~" << x << " = " << a << endl;
	
	_getch();
	return 0;
}