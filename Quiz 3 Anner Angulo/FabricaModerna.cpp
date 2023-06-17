#include "FabricaModerna.h"

FabricaModerna::FabricaModerna()
{
    mesilla = crearMesilla();
    silla = crearSilla();
    sofa = crearSofa();
}

FabricaModerna::~FabricaModerna()
{
}

Silla* FabricaModerna::crearSilla()
{
    return Interfaz::crearSillaModerna();
}

Mesilla* FabricaModerna::crearMesilla()
{
    return Interfaz::crearMesillaModerna();
}

Sofa* FabricaModerna::crearSofa()
{
    return Interfaz::crearSofaModerno();
}

int FabricaModerna::precioTotal()
{
    int precio = 0;
    precio = mesilla->getPrecio() + silla->getPrecio() + sofa->getPrecio();
    return precio;
}

string FabricaModerna::toString()
{
    stringstream s;
    s << mesilla->toString();
    s << silla->toString();
    s << sofa->toString();
    s << "Precio total de los muebles: " << precioTotal() << " colones\n";
    return s.str();
}