#pragma once
#include "Silla.h"
#include "Mesilla.h"
#include "Sofa.h"
class Fabrica
{
	protected:
	Silla* silla;
	Mesilla* mesilla;
	Sofa* sofa;
public:
	virtual Silla* crearSilla() = 0;
	virtual Mesilla* crearMesilla() = 0;
	virtual Sofa* crearSofa() = 0;
	virtual int precioTotal() = 0;
	virtual string toString() = 0;
};

