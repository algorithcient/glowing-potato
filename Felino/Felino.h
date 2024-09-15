#pragma once

#include <iostream>
using namespace std;

class Felino {
protected:
	string pelaje;
	double velocidad;
	double altura;
public:
	Felino() {};
	Felino(double v);
	~Felino();
	void dormir();
	void saltar();
	double getAltura();
};

Felino::Felino() {
	pelaje = "SIN PELAJE";
	velocidad = 0;
	altura = 0;
}
Felino::Felino(double v) {
	this->velocidad = velocidad;
	this->pelaje = pelaje;
	this->altura = altura;
}
Felino::~Felino() {}

void Felino::saltar() {
	cout << "El felino esta saltando JUMP!" << endl;
}
void Felino::dormir() {
	cout << "El felino esta durmiendo zzzzz" << endl;
}
double Felino::getAltura() {
	return altura;
}