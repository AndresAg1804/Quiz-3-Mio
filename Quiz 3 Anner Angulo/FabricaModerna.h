#pragma once
#include "Fabrica.h"
#include "MesillaModerna.h"
#include "SofaModerno.h"
#include "SillaModerna.h"
#include "Interfaz.h"
class FabricaModerna : public Fabrica
{
public:
	FabricaModerna();
	virtual ~FabricaModerna();
	virtual Silla* crearSilla();
	virtual Mesilla* crearMesilla();
	virtual Sofa* crearSofa();
	virtual int precioTotal();
	virtual string toString();
};
