#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Elige un numero del 1 al 10" << endl;
	cin >> n;
	cout << "La tabla de multiplicar del " << n << " es:" << endl;

	for (int i = 1; i < 11; i++) {
		cout << n << " x " << i << " = " << n * i << endl;
	}
}