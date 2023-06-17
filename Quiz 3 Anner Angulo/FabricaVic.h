#pragma once
#include "Fabrica.h"
#include "MesillaVic.h"
#include "SofaVic.h"
#include "SillaVic.h"
#include "Interfaz.h"
class FabricaVic : public Fabrica
{
public:
	FabricaVic();
	virtual ~FabricaVic();
	virtual Silla* crearSilla();
	virtual Mesilla* crearMesilla();
	virtual Sofa* crearSofa();
	virtual int precioTotal();
	virtual string toString();
};
