#include "Interfaz.h"

Silla* Interfaz::crearSillaModerna()
{
    return new SillaModerna();
}

Silla* Interfaz::crearSillaVic()
{
    return new SillaVic;
}

Silla* Interfaz::crearSillaDeco()
{
    return new SillaDeco;
}

Sofa* Interfaz::crearSofaModerno()
{
    return new SofaModerno;
}

Sofa* Interfaz::crearSofaVic()
{
    return new SofaVic;
}

Sofa* Interfaz::crearSofaDeco()
{
    return new SofaDeco;
}

Mesilla* Interfaz::crearMesillaModerna()
{
    return new MesillaModerna;
}

Mesilla* Interfaz::crearMesillaVic()
{
    return new MesillaVic;
}

Mesilla* Interfaz::crearMesillaDeco()
{
    return new MesillaDeco;
}
