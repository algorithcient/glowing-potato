#pragma once
#include<iostream>
#include "Felino.h"

class Leon :public Felino {
protected:
	string melena;
public:
	Leon();
	Leon(double v);
	~Leon();
	double getVelocidad();
};
Leon::Leon() {
	melena = "Sin melena";
}
Leon::~Leon(){}
Leon::Leon(double v) :Felino(v) {/*constructor que reutiliza el constructor del padre*/ }

double Leon::getVelocidad() {
	return this->velocidad;
}