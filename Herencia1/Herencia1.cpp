#include <iostream>
#include <conio.h>
using namespace std;

class Padre {
protected:
	string mensaje = "Soy el padre";
public:
	Padre() {};
	~Padre() {};

	void getMensaje() {
		cout << endl << "El padre: " << this->mensaje;
	}

};

class Hijo :public Padre {
public:
	void getMensaje() {
		cout << endl << "El hijo: " << this->mensaje;
	}
};

class Nieto :public Hijo {
public:
	void getMensaje() {
		cout << endl << "El Nieto" << this->mensaje;
	}
};


int main() {
	Padre* oPadre = new Padre();
	oPadre->getMensaje();

	Hijo* oHijo = new Hijo();
	oHijo->getMensaje();

	Nieto* oNieto = new Nieto();
	oNieto->getMensaje();
	system("pause >0");
}



