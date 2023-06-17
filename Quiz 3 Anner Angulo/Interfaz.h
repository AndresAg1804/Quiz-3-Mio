#pragma once
#include "MesillaModerna.h"
#include "SofaModerno.h"
#include "SillaModerna.h"
#include "MesillaVic.h"
#include "SofaVic.h"
#include "SillaVic.h"
#include "MesillaDeco.h"
#include "SofaDeco.h"
#include "SillaDeco.h"
#include "Interfaz.h"
class Interfaz
{
public:
	static Silla* crearSillaModerna();
	static Silla* crearSillaVic();
	static Silla* crearSillaDeco();
	static Sofa* crearSofaModerno();
	static Sofa* crearSofaVic();
	static Sofa* crearSofaDeco();
	static Mesilla* crearMesillaModerna();
	static Mesilla* crearMesillaVic();
	static Mesilla* crearMesillaDeco();
};

