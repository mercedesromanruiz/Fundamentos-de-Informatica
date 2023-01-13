#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, aux;

	a = 1;
	b = 2;
	c = 3;
	d = 4;

	cout << "Valores antes de intercambiar: " << a << " " << b << " " << c << " " << d << endl;

	aux = a;
	a = b;
	b = c;
	c = d;
	d = aux;

	cout << "Valores despues de intercambiar: " << a << " " << b << " " << c << " " << d << endl;
}
