#include <iostream>
using namespace std;

int main()
{
	int a, b, n;
	cout << "Introduce dos valores:" << endl;
	cin >> a >> b;
	cout << "Orden original: " << a << ", " << b << endl;

	n = a;
	a = b;
	b = n;

	cout << "Orden cambiado: " << a << ", " << b << endl;

}
