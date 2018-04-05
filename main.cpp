#include <iostream>
#include "thing.h"

int main()
{
	thing t(1,2,3);
	cout << "T ";
	t.display();
	cout << endl << endl;
	thing a=t;
	cout << "A ";
	a.display();
	cout << endl << endl;
	thing b;
	cout << "B ";
	b.display();
	cout << endl << endl;
	t.set(4, 5, 6);
	cout << "Setting T " << endl;
	cout << "T ";
	t.display();
	cout << endl << endl;
	cout << "A ";
	a.display();
	cout << endl << endl;
	cout << "B ";
	b.display();
	cout << endl << endl;

	system("pause");
}
