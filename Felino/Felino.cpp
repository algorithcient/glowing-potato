#include "Leon.h"

int main() {
	Leon* oLeon1 = new Leon();
	Leon* oLeon2 = new Leon(25);

	cout << "EL LEON 1 ....." << endl;
	oLeon1->dormir();
	cout << "La velocidad del leon 1 es: " << oLeon1->getVelocidad();

	cout << "EL LEON 2 ....." << endl;
	oLeon2->dormir();
	cout << "La velocidad del leon 2 es: " << oLeon2->getVelocidad();


	return 0;
}