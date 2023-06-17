#pragma once
#include "Fabrica.h"
#include "MesillaDeco.h"
#include "SofaDeco.h"
#include "SillaDeco.h"
#include "Interfaz.h"
class FabricaDeco : public Fabrica
{
public:
	FabricaDeco();
	virtual ~FabricaDeco();
	virtual Silla* crearSilla();
	virtual Mesilla* crearMesilla();
	virtual Sofa* crearSofa();
	virtual int precioTotal();
	virtual string toString();
};

