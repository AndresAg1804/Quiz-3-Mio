#include "FabricaVic.h"
FabricaVic::FabricaVic()
{
    mesilla = crearMesilla();
    silla = crearSilla();
    sofa = crearSofa();
}

FabricaVic::~FabricaVic()
{
}

Silla* FabricaVic::crearSilla()
{
    return Interfaz::crearSillaVic();
}

Mesilla* FabricaVic::crearMesilla()
{
    return Interfaz::crearMesillaVic();
}

Sofa* FabricaVic::crearSofa()
{
    return Interfaz::crearSofaVic();
}

int FabricaVic::precioTotal()
{
    int precio = 0;
    precio = mesilla->getPrecio() + silla->getPrecio() + sofa->getPrecio();
    return precio;
}

string FabricaVic::toString()
{
    stringstream s;
    s << mesilla->toString();
    s << silla->toString();
    s << sofa->toString();
    s << "Precio total de los muebles: " << precioTotal() << " colones\n";
    return s.str();
}
